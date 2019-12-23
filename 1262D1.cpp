#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i];
	priority_queue<ii> pq;
	for (int i=0; i<n; i++)
		pq.push({a[i],-i});
	map<int,int> mp;
	map<ii,int> ret;
	int ct=0;
	while(!pq.empty()) {
		ct++;
		mp[-pq.top().second]=pq.top().first, pq.pop();
		int idx=0;
		for(auto it : mp)
			idx++, ret[{ct,idx}]=it.second;
	}
	int m; cin>>m;
	while(m-->0) {
		int k,pos; cin>>k>>pos; cout<<ret[{k,pos}]<<"\n";
	}
	return 0;
}
