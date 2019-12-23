#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,x,t=0; cin>>n;
	for (int i=0; i<n; i++) {
		cin>>x;
		if(x%2) cout<<(t?(x-1)/2:(x+1)/2)<<endl, t^=1;
		else cout<<x/2<<endl;
	}
	return 0;
}
