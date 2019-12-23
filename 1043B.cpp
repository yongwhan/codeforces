#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

bool eval(vector<int> &x, int n, vector<int> &a) {
	vector<int> ret(n,0);
	int k=x.size();
	ret[0]=x[0];
	for (int i=1; i<n; i++) {
		ret[i]=(ret[i-1]+x[i%k]);
		if(a[i]!=ret[i])
			return false;
	}
	return true;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n);
	for (int i=0; i<n; i++) cin>>a[i];
	vector<int> x={a[0]};
	vector<int> ret;
	for (int i=1; i<=n; i++) {
		if(eval(x,n,a)) ret.push_back(i);
		if(i!=n) x.push_back(a[i]-a[i-1]);
	}
	cout << ret.size() << endl;
	for (auto it : ret) cout << it << " ";
	cout << endl;
	return 0;
}
