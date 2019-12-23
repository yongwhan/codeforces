#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int eval(vector<int> &v) {
	int n=v.size(), ret=0;
	for (int i=0; i<n; i+=2)
		ret+=v[i+1]-v[i];
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n; n*=2;
	vector<int> a(n);
	for (int i=0; i<n; i++) cin>>a[i];
	sort(a.begin(),a.end());
	int ret=1e9;
	for (int i=0; i<n; i++)
		for (int j=i+1; j<n; j++) {
			vector<int> b(n-2);
			int iter=0;
			for (int k=0; k<n; k++)
				if(k!=i&&k!=j) b[iter++]=a[k];
			ret=min(ret,eval(b));
		}
	cout << ret << endl;
	return 0;
}
