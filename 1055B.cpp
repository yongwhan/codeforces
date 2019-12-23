#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,m,l; cin>>n>>m>>l;
	vector<ll> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i];
	ll ret=0;
	int cur=0;
	for (int i=0; i<n; i++) {
		if(a[i]>l)
			cur++;
		else {
			if(cur)
				cur=0, ret++;
		}
	}
	if(cur)
		ret++;

	int t;
	for (int i=0; i<m; i++) {
		cin>>t;
		if(!t) cout << ret << endl;
		else {
			ll p,d; cin>>p>>d; p--;
			bool prev=(a[p]>l);
			a[p]+=d;
			bool next=(a[p]>l);
			if(!prev) {
				vector<bool> nbr;
				if(next) {
					vector<bool> nbr;
					ll left=p-1, right=p+1;
					if(left>=0)
						nbr.push_back(a[left]>l);
					if(right<n)
						nbr.push_back(a[right]>l);
					if(nbr.size()==1) {
						if(!nbr[0]) ret++;
					} else if(nbr.size()==2) {
						if(nbr[0]==nbr[1]) {
							if(!nbr[0]) ret++;
							else ret--;
						}
					} else ret++;
				}
			}
		}
	}
	return 0;
}
