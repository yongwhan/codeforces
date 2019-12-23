#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mx=(int) (sqrt(1.5 * 1e7) + 7);
vector<int> prime;
vector<bool> flag(mx,true);

int gcd(int a, int b) {
	return (b ? gcd(b,a%b) : a);
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	flag[0]=flag[1]=false;
	for (int i=2; i*i<mx; i++)
		if(flag[i])
			for (int j=i; j*i<mx; j++)
				flag[i*j]=false;
	for (int i=0; i<mx; i++)
		if(flag[i])
			prime.push_back(i);

	int n; cin>>n;
	vector<int> a(n);
	for (int i=0; i<n; i++) cin>>a[i];

	int g=a[0];
	for (int i=1; i<n; i++)
		g=gcd(g,a[i]);

	for (int i=0; i<n; i++)
		a[i]/=g;

	int ret=0;
	for (auto p : prime) {
		int cur=0;
		for (int i=0; i<n; i++) {
			bool div=false;
			if(a[i]%p==0) {
				div=true;
				while(1) {
					if(a[i]%p) break;
					a[i]/=p;
				}
			}
			cur+=int(div);
		}
		ret=max(ret,cur);
	}
	int cur=0;
	map<int,int> mp;
	for (auto it : a)
		if(it>1)
			mp[it]++, cur=max(cur,mp[it]);
	ret=max(ret,cur);
	cout << (ret ? (n-ret) : -1) << endl;
	return 0;
}
