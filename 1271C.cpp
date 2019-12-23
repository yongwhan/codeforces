#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,sx,sy; cin>>n>>sx>>sy;
	int l=0,r=0,u=0,d=0;
	for(int i=0; i<n; i++) {
		int x,y; cin>>x>>y;
		if(x<sx) l++;
		if(x>sx) r++;
		if(y<sy) d++;
		if(y>sy) u++;
	}
	int mx=max({l,r,d,u});
	if(mx==l) sx--;
	else if(mx==r) sx++;
	else if(mx==d) sy--;
	else sy++;
	cout<<mx<<"\n"<<sx<<" "<<sy<<"\n";
	return 0;
}
