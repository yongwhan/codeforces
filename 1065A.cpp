#include<bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	long long s,a,b,c;
	while(t--) cin>>s>>a>>b>>c, cout<<s/c+((s/c)/a)*b<<endl;
	return 0;
}
