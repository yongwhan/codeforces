#include<bits/stdc++.h>
using namespace std;

bool isprime(int x) {
	int ret=0;
	for (int d=1; d*d<=x; d++) {
		if(x%d==0) {
			ret++;
			int e=x/d;
			if(d!=e) ret++;
		}
	}
	return ret==2;
}

bool isok(int x, int p) {
	for (int d=2; d*d<=x; d++)
		if(x%d==0&&d<=p)
			return false;
	return true;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int p,y; cin>>p>>y;
	int t=y;
	while(1) {
		if(t==p) {
			cout << -1 << endl;
			return 0;
		}
		if(isprime(t)) {
			cout << t << endl;
			return 0;
		}
		if(isok(t,p)) {
			cout << t << endl;
			return 0;
		}
		t--;
	}
	return 0;
}
