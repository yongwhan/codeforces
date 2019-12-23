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

bool valid(vector<string> &v) {
	int n=v.size();
	set<string> st;
	for (int i=0; i<n; i++) {
		int m=v[i].size();
		string lst=v[i]+v[i];
		string cur=v[i];
		for (int j=0; j<m; j++)
			cur=min(cur,lst.substr(j,m));
		st.insert(cur);
	}
	return st.size()==1;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<string> v(n);
	for (int i=0; i<n; i++) cin>>v[i];
	if(!valid(v)) { cout << -1 << endl; return 0; }
	map<string, int> mp;
	int m=v[0].size();
	for (int i=0; i<n; i++) {
		set<string> vis;
		string lst=v[i]+v[i];
		for (int j=0; j<m; j++) {
			string cur=lst.substr(j,m);
			if(vis.find(cur)==vis.end()) {
				vis.insert(cur);
				mp[cur]+=j;
			}
		}
	}

	int ret=1e9;
	for (map<string, int>::iterator it=mp.begin(); it!=mp.end(); it++)
		ret=min(ret,(*it).second);
	cout << ret << endl;
	return 0;
}
