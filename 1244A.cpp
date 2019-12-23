#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		int a,b,c,d,k; cin>>a>>b>>c>>d>>k;
		int x=(a+c-1)/c, y=(b+d-1)/d;
		if(x+y<=k) cout<<x<<" "<<y<<endl;
		else cout<<-1<<endl;
	}
	return 0;
}
