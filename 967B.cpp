#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,A,B,S=0; cin>>n>>A>>B;
	vector<ll> s(n+1,0);
	int x;
	for (int i=0; i<n; i++) cin>>s[i], S+=s[i];
	x=s[0];
	s.erase(s.begin());
	sort(s.begin(),s.end(), greater<ll>());
	for (int i=0; i<n; i++) {
		if(x*A>=B*S) {
			cout << i << endl; return 0;
		}
		S-=s[i];
	}
	return 0;
}
