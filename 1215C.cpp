#include<bits/stdc++.h>
using namespace std;

const int mx=2e5+777;
int n,q1[mx],q2[mx];
int main() {
	int n,x=0,y=0;
	string a,b; cin>>n>>a>>b;
	for (int i=1;i<=n;i++) {
		if (a[i-1]==b[i-1]) continue;
		if (a[i-1]<b[i-1]) q1[++x]=i;
		else q2[++y]=i;
	}
	if ((x+y)%2) {
		cout<<-1<<"\n";
		return 0;
	}
	cout<<(x+y)/2+(x&1)<<"\n";
	for (int i=2;i<=x;i+=2)
		cout<<q1[i]<<" "<<q1[i-1]<<"\n";
	for (int i=2;i<=y;i+=2)
		cout<<q2[i]<<" "<<q2[i-1]<<"\n";
	if(x&1)
		cout<<q1[x]<<" "<<q1[x]<<"\n"<<q1[x]<<" "<<q2[y]<<"\n";
	return 0;
}
