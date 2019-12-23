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

const int mod=100;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	vector<bool> flag(mod,true);
	flag[0]=flag[1]=false;
	for (int i=2; i*i<mod; i++)
		for (int j=i; j*i<mod; j++)
			flag[i*j]=false;

	vector<int> comp;

	for (int i=2; i<mod*2; i++)
		if(!flag[i]) comp.push_back(i);

	int sz=comp.size();

	vector<int> v(mod*2,0);
	for (int i=1; i<mod*2; i++) {
		int cur=0;
		for (int j=0; j<sz; j++)
			if(comp[j]<=i) {
				int tmp=v[i-comp[j]];
				if(tmp>=0) cur=max(cur,1+tmp);
			}
		if(!cur) v[i]=-1;
		else v[i]=cur;
	}

	int q; cin>>q;
	while(q--) {
		int n; cin>>n;
		int r=n%mod;
		int ret=0;
		for (int t=0; t<15; t++) {
			if(v[r]>=0 && r<=n && (n-r)%4==0) ret=max(ret, (n-r)/4 + v[r]);
			r++;
		}
		if(ret) cout << ret << endl;
		else cout << -1 << endl;
	}
	return 0;
}
