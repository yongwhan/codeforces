#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const ll mod=998244353;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n; cin>>n;
	string s; cin>>s;
	set<char> st(s.begin(), s.end());
	if(st.size()==1) {
		cout << n*(n+1)/2 % mod << endl;
		return 0;
	}

	if(s.front()!=s.back()) {
		ll ret=1;
		for (int j=0; j<2; j++) {
			reverse(s.begin(), s.end());
			for (int i=0; i<n-1; i++) {
				if(s[i]==s[0]) ret++;
				else break;
			}
		}
		cout << ret << endl;
		return 0;
	}

	ll left=-1, right=-1;
	for (int i=0; i<n; i++) {
		if(s[0]!=s[i]) {
			left=i;
			break;
		}
	}
	for (int i=n-1; i>=0; i--) {
		if(s[0]!=s[i]) {
			right=i;
			break;
		}
	}
	cout << (left+1)*(n-right)%mod << endl;
	return 0;
}
