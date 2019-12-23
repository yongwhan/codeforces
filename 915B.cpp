#include<bits/stdc++.h>
using namespace std;

int n;

bool ok(int x, int y) {
	bool bigger=true;
	if(x<y) bigger=false;
	int rem=n;
	if(bigger) rem=min(rem,n-x);
	else rem=min(rem,x-1);
	return rem;
}

int eval(int pos, int u, int v) {
	if(min(u,v)==1&&max(u,v)==n) return 0;
	int ret=0;
	if(u==v&&(u==1||u==n)) return abs(pos-u)+1;
	if(ok(u,v)) ret+=abs(pos-u), ret++, pos=u;
	if(ok(v,u)) ret+=abs(pos-v), ret++;
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int l,r,pos; cin>>n>>pos>>l>>r;
	cout << min(eval(pos,l,r),eval(pos,r,l)) << endl;
	return 0;
}
