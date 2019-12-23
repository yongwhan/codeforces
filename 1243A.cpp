#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		int n; cin>>n;
		vector<int> a(n);
		for (int i=0; i<n; i++)
			cin>>a[i];
		int ret=-1;
		for (int i=1; i<=n; i++) {
			int cur=0;
			for (int j=0; j<n; j++)
				if(i<=a[j]) cur++;
			if(cur>=i) ret=i;
		}
		cout<<ret<<"\n";
	}
	return 0;
}
