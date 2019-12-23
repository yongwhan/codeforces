#include<bits/stdc++.h>
using namespace std;

int main() {
	long long a,b,c,ret=0; cin>>a>>b>>c;
	long long d=min(a,b);
	ret+=2*(c+d);
	a-=d; b-=d;
	if(a||b) ret++;
	cout<<ret<<endl;
	return 0;
}
