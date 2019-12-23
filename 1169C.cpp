#include<bits/stdc++.h>
using namespace std;

const int mx=3e5+777;
int n,m,a[mx];

int next(int u, int x, int cur) {
	int uu=u+x, v=uu%m;
	if(cur<=u) return (cur<=v&&u>v) ? cur : u;
	else return (cur<=uu) ? cur : -1;
}

bool ok(int x) {
	int cur=0;
	for (int i=0; i<n; i++) {
		int nxt = next(a[i],x,cur);
		if(nxt==-1)
			return false;
		cur=nxt;
	}
	return true;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	cin>>n>>m;
	for (int i=0; i<n; i++) cin>>a[i];
	int low=0, high=m;
	while(low<high) {
		int mid=(low+high)/2;
		if(ok(mid)) high=mid;
		else low=mid+1;
	}
	cout << high << endl;
	return 0;
}
