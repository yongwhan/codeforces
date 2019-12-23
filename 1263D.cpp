#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

// Union-Find Disjoint Sets Library written in OOP manner, using both path compression and union by rank heuristics
class UnionFind {                                              // OOP style
private:
  vi p, rank, setSize;                       // remember: vi is vector<int>
  int numSets;
public:
  UnionFind(int N) {
    setSize.assign(N, 1); numSets = N; rank.assign(N, 0);
    p.assign(N, 0); for (int i = 0; i < N; i++) p[i] = i; }
  int findSet(int i) { return (p[i] == i) ? i : (p[i] = findSet(p[i])); }
  bool isSameSet(int i, int j) { return findSet(i) == findSet(j); }
  void unionSet(int i, int j) { 
    if (!isSameSet(i, j)) { numSets--; 
    int x = findSet(i), y = findSet(j);
    // rank is used to keep the tree short
    if (rank[x] > rank[y]) { p[y] = x; setSize[x] += setSize[y]; }
    else                   { p[x] = y; setSize[y] += setSize[x];
                             if (rank[x] == rank[y]) rank[y]++; } } }
  int numDisjointSets() { return numSets; }
  int sizeOfSet(int i) { return setSize[findSet(i)]; }
};

int main() {
	int n; cin>>n;
	UnionFind uf(n);
	map<char,vector<int>> mp;
	for (int i=0; i<n; i++) {
		string s; cin>>s;
		set<char> st(s.begin(),s.end());
		for (char ch : s)
			mp[ch].push_back(i);
	}

	for (auto it : mp) {
		auto &cur=it.second;
		for (auto x : cur)
			uf.unionSet(cur.front(),x);
	}
	cout<<uf.numDisjointSets()<<"\n";
  return 0;
}
