#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int q; cin>>q;
	while(q--) {
		int n; cin>>n;
		vector<int> a(n);
		for (int i=0; i<n; i++)
			cin>>a[i];
		sort(a.begin(),a.end());
		bool one=true;
		for (int i=0; i<n-1; i++)
			if(abs(a[i]-a[i+1])==1) one=false;
		cout<<(one?1:2)<<endl;
	}
	return 0;
}
