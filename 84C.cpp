#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int window_size=3;

bool ok(map<int,int>::iterator it, ll xs, ll ys) {
	ll r=it->second, dx=abs(it->first-xs), dy=abs(ys);
	return dx*dx+dy*dy<=r*r;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m,x,r,y,cur,hit=0; cin>>n;
	map<int,int> target, ret, order;
	for (int i=0; i<n; i++)
		cin>>x>>r, target[x]=r, order[i]=x;
	cin>>m;
	for (int i=0; i<m; i++) {
		cin>>x>>y;
		auto it=target.upper_bound(x);
	
		for (int j=0; j<window_size; j++)
			if(it!=target.begin())
				it--;

		for (int j=0; j<window_size*2; j++) {
			if(it==target.end())
				break;
			if(ok(it,x,y)&&ret.find(it->first)==ret.end())
				ret[it->first]=i+1;
			it++;
		}
	}

	for (auto it : order) {
		if(ret[it.second]) hit++;
		else ret[it.second]=-1;
	}

	cout << hit << endl;
	for (auto it : order)
		cout << ret[it.second] << " ";
	cout << endl;
	return 0;
}
