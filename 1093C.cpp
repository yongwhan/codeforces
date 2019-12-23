#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n; n/=2;
	vector<ll> fwd, bwd;
	while(n--) {
		ll b; cin>>b;
		if(fwd.empty())
			fwd.push_back(0), bwd.push_back(b);
		else
			fwd.push_back(max(fwd.back(),b-bwd.back())),
			bwd.push_back(b-fwd.back());
	}
	reverse(bwd.begin(), bwd.end());
	for (auto it : fwd)
		cout << it << " ";
	for (auto it : bwd)
		cout << it << " ";
	cout << endl;
	return 0;
}
