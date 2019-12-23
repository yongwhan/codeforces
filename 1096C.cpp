#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int gcd(int a, int b) {
	if(!b) return a;
	return gcd(b, a%b);
}

struct frac {
	int a, b;
	frac(int a_, int b_) {
		int g=gcd(a_,b_);
		a=a_/g;
		b=b_/g;
	}
};

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	map<int,int> ret;
	for (int i=3; i<=360; i++) {
		frac f = frac(i*180 - 180*(i-2), i*2);
		int d=f.b;
		for (int j=d; j<i-1; j+=d) {
			int key=f.a*(j/d);
			if(ret.find(key)==ret.end())
				ret[key]=i;
		}
	}

	int t,ang; cin>>t;
	while(t--)
		cin>>ang, cout<<ret[ang]<<endl;
	return 0;
}
