#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const int mod=1e9+7, mx=1e5+777;
vector<ll> fib(mx,1);

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s,cur; cin>>s;
	fib[1]=1;
	for (int i=2; i<mx; i++)
		fib[i]=(fib[i-1]+fib[i-2])%mod;
	int n=s.size();
	for (int i=0; i<n; i++)
		if(s[i]=='w'||s[i]=='m') {
			cout<<0<<"\n";
			return 0;
		}
	ll ret=1;
	string lst="un";
	for (char ch : lst) {
		string t=s;
		for (int i=0; i<n; i++)
			if(t[i]!=ch)
				t[i]=' ';
		stringstream ss(t);
		while(ss>>cur)
			ret=(ret*fib[cur.size()])%mod;
	}
	cout<<ret<<"\n";
	return 0;
}
