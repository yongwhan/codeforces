#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	for (int i=0; i<n; i++) {
		int c,sum; cin>>c>>sum;
		if(c>=sum) {
			cout<<sum<<"\n";
			continue;
		}
		int q=sum/c, r=sum%c;
		cout<<q*q*(c-r) + (q+1)*(q+1)*r<<"\n";
	}
	return 0;
}
