#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mx=1005;
vector<int> deg(mx,0);

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> par(n-1);
	vector<vector<int>> child(n);
	for (int i=0; i<n-1; i++) {
		cin>>par[i], deg[par[i]-1]++;
		child[par[i]-1].push_back(i+1);
	}
	int ret=0;
	for (int i=0; i<n; i++) {
		if(deg[i]) {
			int cur=0;
			for (auto x : child[i])
				if(!deg[x]) cur++;
			if(cur<3) {
				cout << "No" << endl;
				return 0;
			}
		}
	}
	cout << "Yes" << endl;
	return 0;
}
