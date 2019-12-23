#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int a,b,f,k,cur,ret=0,t;
	cin>>a>>b>>f>>k;
	cur=b;
	if(cur<f) {
		cout << -1 << endl;
		return 0;
	}
	cur-=f;
	for (int i=0; i<k-1; i++) {
		if(i%2) t=f;
		else t=a-f;
		t<<=1;
		if(t>cur) ret++, cur=b;
		if(t>cur) { cout << -1 << endl; return 0; }
		cur-=t;
	}
	if(k%2) t=a-f;
	else t=f;
	if(t>cur) ret++, cur=b;
	if(t>cur) {
		cout << -1 << endl; return 0;
	}
	cout << ret << endl;
	return 0;
}
