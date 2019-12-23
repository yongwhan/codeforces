#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mx=1e6+77;
unordered_map<int,int> flag;
vector<bool> pr(mx,true);
vector<ll> prime;

ll eval(ll x) {
	if(flag.find(x)!=flag.end())
		return flag[x];
	for (auto p : prime) {
		if(p*p>x) return flag[x]=x;
		if(x%p==0) return flag[x]=max(p,eval(x/p));
	}
	return x;
}

const int inf=1e9;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);	
	pr[0]=pr[1]=false;
	for (int i=2; i*i<mx; i++)
		if(pr[i])
			for (int j=i; j*i<mx; j++)
				pr[i*j]=false;
	for (int i=2; i<mx; i++)
		if(pr[i])
			prime.push_back(i);

	for (int i=2; i<mx; i++) {
		ll cur=eval(i);
		flag[i]=cur;
	}

	int x2; cin>>x2;
	int x0=(pr[x2] ? x2 : inf);
	for (auto p : prime) {
		if(p>x2) break;
		if(x2%p==0) {
			int t=x2/p;
			for (int x1=(t-1)*p+1; x1<x2; x1++) {
				if(pr[x1]) x0=min(x0,x1);
				else x0=min(x0,x1-flag[x1]+1);
			}
		}
	}
	cout << x0 << endl;
	return 0;
}
