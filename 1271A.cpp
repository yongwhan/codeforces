#include <bits/stdc++.h>	
using namespace std;
int main(){
	int a,b,c,d,e,f,ret=0;
	cin>>a>>b>>c>>d>>e>>f;
	for (int i=0;i<=min(a,d);i++)
		ret=max(ret,i*e+min({d-i,b,c})*f);
	cout<<ret<<"\n";
	return 0;
}
