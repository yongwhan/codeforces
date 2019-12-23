#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,one=0,cur,ret=0,ct=0; cin>>n;
	vector<int> p(n);
	for (int i=0; i<n; i++)
		cin>>p[i], p[i]--;
	for (int i=0; i<n; i++) {
		cin>>cur;
		if(cur) one++;
	}
	if(one%2==0) ret++;
	set<int> vis;
	for (int i=0; i<n; i++) {
		if(vis.find(i)==vis.end()) {
			ct++;
			int cur=i;
			while(vis.find(cur)==vis.end())
				vis.insert(cur), cur=p[cur];
		}
	}
	if(ct>1) ret+=ct;
	cout << ret << endl;
	return 0;
}
