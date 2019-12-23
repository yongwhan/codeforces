#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
#define LSOne(S) (S & (-S))

class FenwickTree {
private:
  vi ft;

public:
  FenwickTree() {}
  FenwickTree(int n) { ft.assign(n + 1, 0); }
  int rsq(int b) {
    int sum = 0; for (; b; b -= LSOne(b)) sum += ft[b];
    return sum; }

  int rsq(int a, int b) {
    return rsq(b) - (a == 1 ? 0 : rsq(a - 1)); }

  void adjust(int k, int v) {
    for (; k < (int)ft.size(); k += LSOne(k)) ft[k] += v; }
};

int main() {
	string s; cin>>s;
	int n=s.size();
	vector<FenwickTree> v(26);
	for (int i=0; i<26; i++)
		v[i]=FenwickTree(n);
	for (int i=0; i<n; i++)
		v[s[i]-'a'].adjust(i+1,1);
	int q; cin>>q;
	while(q--) {
		int t; cin>>t;
		if(t==1) {
			int pos; char ch; cin>>pos>>ch;
			if(ch==s[pos-1])
				continue;
			v[s[pos-1]-'a'].adjust(pos,-1);
			v[ch-'a'].adjust(pos,1);
			s[pos-1]=ch;
		} else {
			int l,r; cin>>l>>r;
			int ret=0;
			for (char ch='a'; ch<='z'; ch++)
				if(v[ch-'a'].rsq(l,r))
					ret++;
			cout<<ret<<"\n";
		}
	}
	return 0;
}
