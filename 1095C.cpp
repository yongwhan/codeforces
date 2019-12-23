#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k; cin>>n>>k;
	if(k>n) {
		cout << "NO" << endl;
		return 0;
	}

	priority_queue<int> ret;
	for (int i=0; i<32; i++) {
		ll cur=1LL<<i;
		if(n&cur)
			ret.push(cur);
	}
	if(ret.size()>k) {
		cout << "NO" << endl;
		return 0;
	}
	while(ret.size()<k) {
		int cur=ret.top(); ret.pop();
		ret.push(cur/2); ret.push(cur/2);
	}
	cout << "YES" << endl;
	while(!ret.empty())
		cout << ret.top() << " ", ret.pop();
	cout << endl;
	return 0;
}
