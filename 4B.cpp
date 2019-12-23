#include<bits/stdc++.h>
using namespace std;

int main() {
	int d,s,x=0, y=0,t; cin>>d>>s;
	vector<int> a(d), b(d), ret(d);
	for (int i=0; i<d; i++) cin>>a[i]>>b[i], ret[i]=a[i], s-=ret[i], y+=b[i]-a[i];
	if(s<0) { cout << "NO" << endl; return 0; }
	for (int i=0; i<d; i++) t=min(b[i]-a[i],s), s-=t, ret[i]+=t;
	if(!s) {
		cout << "YES" << endl;
		for (int i=0; i<d; i++) {
			if(i) cout << " ";
			cout << ret[i];
		}
		cout << endl;
		return 0;
	}
	cout << "NO" << endl;
	return 0;
}
