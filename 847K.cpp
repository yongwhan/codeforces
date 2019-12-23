#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

string eval(string s, string t) {
	if(s<t) swap(s,t);
	return s+":"+t;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,a,b,k,f; cin>>n>>a>>b>>k>>f;
	map<string, int> mp;
	string p;
	for (int i=0; i<n; i++) {
		string s,t; cin>>s>>t;
		string key=eval(s,t);
		if(p==s) mp[key]+=b;
		else mp[key]+=a;
		p=t;
	}

	priority_queue<int> pq;
	for (auto it=mp.begin(); it!=mp.end(); it++)
		pq.push((*it).second);

	int ret=0;
	if(k) {
		while(k--&&!pq.empty()) ret+=min(pq.top(),f), pq.pop();
	}
	while(!pq.empty()) ret+=pq.top(), pq.pop();
	cout << ret << endl;
	return 0;
}
