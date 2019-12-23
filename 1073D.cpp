#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,t; cin>>n>>t;
	queue<ll> q;
	ll sum=0,x;
	for (int i=0; i<n; i++) {
		cin>>x;
		q.push(x);
		sum+=x;
	}
	ll ret=0;
	while(!q.empty()) {
		int n=q.size();
		ret+=t/sum * n; t%=sum;
		while(n--) {
			x=q.front(); q.pop();
			sum-=x;
			if(x>t)
				continue;
			t-=x;
			q.push(x);
			ret++;
			sum+=x;
		}
	}
	cout << ret << endl;
	return 0;
}
