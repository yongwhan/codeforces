#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> ii;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n; cin>>n;
	vector<int> a;
	unordered_map<int,int> st;
	int zero=0;
	for (int i=0; i<n; i++) {
		int x; cin>>x;
		st[x]++;
		if(x==0) zero++;
		else a.push_back(x);
	}
	if(zero) a.push_back(0);

	set<ii> done;
	n=a.size();
	int ret=zero;
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++)
			if(i!=j) {
				ll x=a[i], y=a[j], z;
				ii p={x,y};
				if(done.find(p)!=done.end())
					continue;
				done.insert(p);
				unordered_map<int,int> mp; mp[x]++; mp[y]++;
				int cur=2;
				while(1) {
					z=x+y;
					if(st.find(z)==st.end()) break;
					if(st[z]==mp[z]) break;
					mp[z]++; cur++; x=y; y=z;
				}
				ret=max(ret,cur);
			}
	cout << ret << endl;
	return 0;
}
