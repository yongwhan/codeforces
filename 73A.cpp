#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	vector<ll> x(3);
	ll k; cin>>x[0]>>x[1]>>x[2]>>k;

	vector<ll> a={1,1,1};
	for (int t=0; t<k; t++) {
		bool done=true;
		for (int i=0; i<3; i++)
			if(x[i]!=a[i])
				done=false;
		if(done)
			break;
		set<int> cand={0,1,2};
		for (int i=0; i<3; i++)
			if(a[i]==x[i])
				cand.erase(i);
		ll mx=0;
		int idx=-1;
		for (auto it : cand) {
			ll cur=1;
			for (int i=0; i<3; i++)
				cur*=a[i]+int(it==i);
			if(mx<cur)
				mx=cur, idx=it;
		}
		a[idx]++;
	}

	ll ret=1;
	for (int it : a)
		ret*=it;
	cout << ret << endl;
	return 0;
}
