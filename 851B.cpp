#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> ii;

bool colinear(vector<ii> &a) {
	ii x={a[1].first-a[0].first,a[1].second-a[0].second};
	ii y={a[2].first-a[1].first,a[2].second-a[1].second};
	return (x.first*y.second==x.second*y.first);
}

ll sq(ll x) {
	return x*x;
}

ll dist(ii a, ii b) {
	return sq(a.first-b.first)+sq(a.second-b.second);
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	vector<ii> a(3);
	for (int i=0; i<3; i++)
		cin>>a[i].first>>a[i].second;
	if(colinear(a)||dist(a[1],a[0])!=dist(a[1],a[2])) {
		cout << "No" << endl;
		return 0;
	}
	cout << "Yes" << endl;
	return 0;
}
