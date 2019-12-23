#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int inf=2e5+777;
int idx[inf];

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,t; cin>>n>>t;
	for (int i=1; i<=n; i++) {
		int s,d,x; cin>>s>>d; x=s;
		while(x<inf)
			idx[x]=i, x+=d;
	}

	for (int i=t; i<=inf; i++) {
		if(idx[i]) {
			cout << idx[i] << endl;
			return 0;
		}
	}
	return 0;
}
