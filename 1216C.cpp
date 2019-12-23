#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef tuple<int,int,int,int> tp;

ll area(const tp &a) {
	ll dx=max(0,get<2>(a)-get<0>(a));
	ll dy=max(0,get<3>(a)-get<1>(a));
	return dx*dy;
}

tp inter(const tp &a, const tp &b) {
	return {max(get<0>(a),get<0>(b)),
	        max(get<1>(a),get<1>(b)),
	        min(get<2>(a),get<2>(b)),
	        min(get<3>(a),get<3>(b))};
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	vector<tp> v(3);
	for (int i=0; i<3; i++) {
		int a,b,c,d; cin>>a>>b>>c>>d;
		v[i]={a,b,c,d};
	}

	tp p=inter(v[0],v[1]);
	tp q=inter(v[0],v[2]);
	tp r=inter(p,v[2]);
	cout<<(area(v[0])-area(p)-area(q)+area(r)>0?"YES":"NO")<<"\n";
	return 0;
}
