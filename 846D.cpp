#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m,k,q; cin>>n>>m>>k>>q;
	int grid[n][m];
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
			grid[i][j]=-1;
	for (int i=0; i<q; i++) {
		int x,y,t; cin>>x>>y>>t; x--; y--;
		grid[x][y]=t;
	}

	unordered_map<int, vector<int>> mn, mx;
	for (int i=0; i<n; i++) {
		multiset<int> ms;
		for (int j=0; j<k; j++)
			ms.insert(grid[i][j]);
		auto it=ms.begin();
		auto it2=ms.rbegin();
		mn[i].push_back(*it);
		mx[i].push_back(*it2);
		for (int j=k; j<m; j++) {
			ms.insert(grid[i][j]);
			ms.erase(ms.find(grid[i][j-k]));
			it=ms.begin(), it2=ms.rbegin();
			mn[i].push_back(*it);
			mx[i].push_back(*it2);
		}
	}

	int ret=-1;
	for (int j=0; j<mn[0].size(); j++) {
		multiset<int> ms1, ms2;
		for (int i=0; i<k; i++) {
			ms1.insert(mn[i][j]);
			ms2.insert(mx[i][j]);
		}
		auto it=ms1.begin();
		auto it2=ms2.rbegin();
		if(*it!=-1) {
			if(ret==-1) ret=*it2;
			else ret=min(ret,*it2);
		}
		for (int i=k; i<n; i++) {
			ms1.insert(mn[i][j]);
			ms2.insert(mx[i][j]);
			ms1.erase(ms1.find(mn[i-k][j]));
			ms2.erase(ms2.find(mx[i-k][j]));
			it=ms1.begin(), it2=ms2.rbegin();
			if(*it!=-1) {
				if(ret==-1) ret=*it2;
				else ret=min(ret,*it2);
			}
		}
	}
	cout << ret << endl;
	return 0;
}
