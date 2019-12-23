#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const int mx=7777;
vector<int> worse[mx];

inline bool check(ll x, ll y) {
	return (y&~x);
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<ll> a(n), b(n);
	for (int i=0; i<n; i++)
		cin>>a[i];
	ll ret=0;
	for (int i=0; i<n; i++)
		cin>>b[i], ret+=b[i];
	vector<int> ct(n,0);
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++) {
			if(i==j) continue;
			if(check(a[i],a[j]))
				ct[j]++, worse[j].push_back(i);
		}
	vector<bool> pushed(n,false), remain(n,true);
	queue<int> q;
	int rem=n;
	for (int i=0; i<n; i++)
		if(ct[i]==n-1)
			q.push(i), pushed[i]=true;

	while(!q.empty()) {
		int cur=q.front(); q.pop();
		remain[cur]=false;
		rem--;
		ret-=b[cur];
		for (int &nxt : worse[cur]) {
			if(!remain[nxt]) continue;
			if(check(a[cur],a[nxt]))
				ct[nxt]--;
			if(ct[nxt]!=rem-1) continue;
			if(pushed[nxt]) continue;
			q.push(nxt); pushed[nxt]=true;
		}
	}
	cout<<ret<<"\n";
	return 0;
}
