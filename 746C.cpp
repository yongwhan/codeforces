#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int s,x1,x2,t1,t2,p,d; cin>>s>>x1>>x2>>t1>>t2>>p>>d;
	if(x1>x2) x1=s-x1, x2=s-x2, d*=-1, p=s-p;
	p*=d;
	if(p>x1) p-=2*s;
	cout << min((x2-x1)*t2,(x2-p)*t1) << endl;
	return 0;
}
