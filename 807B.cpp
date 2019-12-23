#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

set<int> eval(int s) {
	set<int> ret;
	int i=(s/50)%475;
	for (int t=0; t<25; t++) {
		i=(i*96+42)%475;
		ret.insert(26+i);
	}
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int p,x,y,z; cin>>p>>x>>y;
	z=x;
	while(1) {
		if(z-50<y) break;
		z-=50;
	}

	for (; ; z+=50) {
		set<int> cur=eval(z);
		if(cur.find(p)!=cur.end()) {
			cout << max(0,(z-x+99)/100) << endl;
			return 0;
		}
	}
}
