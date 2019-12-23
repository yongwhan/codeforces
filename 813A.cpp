#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mx=1e5+5;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	int sum=0,a;
	for (int i=0; i<n; i++) {
		cin>>a;
		sum+=a;
	}

	vector<int> flag(mx,false);
	int m; cin>>m;
	for (int i=0; i<m; i++) {
		int l,r; cin>>l>>r;
		for (int j=l; j<=r; j++)
			flag[j]=true;
	}

	for (int i=sum; i<mx; i++)
		if(flag[i]) {
			cout << i << endl;
			return 0;
		}
	cout << -1 << endl;
	return 0;
}
