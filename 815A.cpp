#include<cstdio>
#include<iomanip>
#include<cmath>
#include<algorithm>
#include<sstream>
#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<map>
#include<string>
#include<iostream>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef pair<string,int> si;

const int mx=105;
int g[mx][mx], n, m;

vector<si> eval(bool flag) {
	vector<si> ret;
	while(1) {
		int zero=0;
		for (int i=0; i<n; i++)
			for (int j=0; j<m; j++)
				if(!g[i][j]) zero++;
		if(zero==n*m) break;

		bool up=false;
		for (int i=0; i<n; i++) {
			int cur=1e9;
			for (int j=0; j<m; j++) {
				cur=min(cur, g[i][j]);
			}

			if(cur) {
				up=true;
				string label="row";
				if(flag) label="col";
				for (int j=0; j<cur; j++) {
					ret.push_back(make_pair(label, i+1));
				}
				for (int j=0; j<m; j++)
					g[i][j]-=cur;
			}
		}

		for (int j=0; j<m; j++) {
			int cur=1e9;
			for (int i=0; i<n; i++) {
				cur=min(cur, g[i][j]);
			}

			if(cur) {
				up=true;
				string label="col";
				if(flag) label="row";
				for (int i=0; i<cur; i++)
					ret.push_back(make_pair(label, j+1));
				for (int i=0; i<n; i++)
					g[i][j]-=cur;
			}
		}

		if(!up) {
			ret.clear();
			return ret;
		}
	}

	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	cin>>n>>m;
	
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++) cin>>g[i][j];

	int gg[mx][mx];
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++) gg[i][j]=g[i][j];

	vector<si> ret;
	for (int i=0; i<2; i++) {
		vector<si> cur=eval(i);

		int zero=0;
		for (int i=0; i<n; i++)
			for (int j=0; j<m; j++)
				if(!g[i][j]) zero++;
		if(zero==n*m) {
			if(ret.empty()) ret=cur;
			else {
				if(cur.size()<ret.size()) ret=cur;
			}
		} else {
			if(cur.empty()) {
				cout << -1 << endl;
				return 0;
			}
		}

		int h[m][n];
		for (int i=0; i<n; i++)
			for (int j=0; j<m; j++)
				h[j][i]=gg[i][j];
		for (int i=0; i<m; i++)
			for (int j=0; j<n; j++)
				g[i][j]=h[i][j];
		swap(n,m);
	}

	int sz=ret.size();
	cout << sz << endl;
	for (int i=0; i<sz; i++)
		cout << ret[i].first << " " << ret[i].second << endl;
	return 0;
}
