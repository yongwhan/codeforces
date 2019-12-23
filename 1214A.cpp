#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,d,e; cin>>n>>d>>e;
	int ret=n;
	for (int i=0; i*5*e<=n; i++)
		ret=min(ret,(n-i*5*e)%d);
	cout<<ret<<endl;
	return 0;
}
