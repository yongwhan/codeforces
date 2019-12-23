#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

ll eval(int x) {
	stringstream ss; ss<<x;
	string s=ss.str();
	int n=s.size();
	for (int i=0; i<n/2; i++)
		swap(s[i],s[n-1-i]);
	int ret=0;
	for (int i=0; i<n; i++) {
		if(s[i]!='9')	break;
		ret++;
	}
	return ret;
}

ll brute(ll n) {
	map<int, int> mp;
	int mx_=0;
	for (int i=1; i<=n; i++)
		for (int j=i+1; j<=n; j++) {
			int cur=eval(i+j);
			mp[cur]++;
			mx_=max(mx_,cur);
		}
	return mp[mx_];
}

int main() {
	ll n; cin>>n;
	if(n<5) { cout << brute(n) << endl; return 0; }
	ll base=5;
	while(1) {
		ll nxt=base*10;
		if(nxt>n) break;
		base=nxt;
	}
	ll ret=1,cur;
	vector<ll> v={1,0,1,2,1,2,3,2,3,4,3,4,5,4}, ct(v.size());
	int iter=0;
	ct[iter++]=base-2;
	ct[iter++]=1;
	for (int i=0; i<4; i++) {
		ct[iter++]=base;	
		ct[iter++]=base-1;
		ct[iter++]=1;
	}
	n-=base;
	for (int i=0; i<ct.size(); i++)
		cur=min(ct[i],n), n-=cur, ret+=cur*v[i];
	cout << ret << endl;
	return 0;
}
