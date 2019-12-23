#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,x0,a,b; cin>>n>>x0;
	map<int,int> ct;
	for (int i=0; i<n; i++) {
		cin>>a>>b;
		if(a>b) swap(a,b);
		for (int j=a; j<=b; j++) ct[j]++;
	}

	set<int> ret;
	for (auto it : ct) if(it.second==n) ret.insert(abs(it.first-x0));
	if(ret.empty()) cout << -1 << endl;
	else cout << *ret.begin() << endl;
	return 0;
}
