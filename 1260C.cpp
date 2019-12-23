#include<bits/stdc++.h>
using namespace std;

int eval(int a, int b) {
	int g=__gcd(a,b);
	a/=g; b/=g;
	if(a>b) swap(a,b);
	if(b%a==0) return b-1;
	int x=0;
	for (int i=1; i<a; i++)
		x=max((i*b)/a-((i-1)*b)/a,x);
	return b%a==1?b/a:(b+a-1)/a;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t-->0) {
		int a,b,k; cin>>a>>b>>k;
		cout<<(eval(a,b)>=k ? "REBEL" : "OBEY")<<"\n";
	}
	return 0;
}
