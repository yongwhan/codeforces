#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int eval(vector<int> &v, int k) {
	int ret=0;
	for (auto x : v) {
		if(x>k) break;
		ret++;
	}
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k; cin>>n>>k;
	vector<int> v(n);
	for (int i=0; i<n; i++) cin>>v[i];
	int ret=0;
	for (int i=0; i<2; i++)
		ret=min(ret+eval(v,k),n),
		reverse(v.begin(),v.end());
	cout << ret << endl;
	return 0;
}
