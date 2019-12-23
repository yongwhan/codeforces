#include<bits/stdc++.h>
using namespace std;

bool has(int x, int d) {
	while(x) {
		if(x%10==d) return true;
		x/=10;
	}
	return false;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int x,hh,mm; cin>>x>>hh>>mm;
	int tgt=hh*60+mm, ret=1e9;
	for (int i=0; i<24*60; i++) {
		int h=i%60, m=i/60;
		if(has(h,7)||has(m,7)) {
			int diff=(tgt-i);
			if(i>tgt) diff=tgt+24*60-i;
			if(diff%x==0) ret=min(ret,diff/x);
		}
	}
	cout << ret << endl;
	return 0;
}
