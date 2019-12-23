#include<cstdio>
#include<iomanip>
#include<cmath>
#include<algorithm>
#include<sstream>
#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<map>
#include<string>
#include<iostream>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n), b(n);
	for (int i=0; i<n; i++) cin>>a[i];
	for (int i=0; i<n; i++) cin>>b[i];

	set<int> vis;
	vector<int> ret(n);
	int ct=0;
	vector<int> missing;
	for (int i=0; i<n; i++)
		if(a[i]==b[i]) ret[i]=a[i], vis.insert(a[i]);
		else ct++, missing.push_back(i);

	if(ct==1) {
		for (int i=1; i<=n; i++)
			if(vis.find(i)==vis.end()) ret[missing[0]]=i, vis.insert(i);
	} else if(ct==2) {
		vector<int> rem;
		for (int i=1; i<=n; i++)
			if(vis.find(i)==vis.end()) rem.push_back(i);
		ret[missing[0]]=rem[0];
		ret[missing[1]]=rem[1];

		int u=0, v=0;
		for (int i=0; i<n; i++)
			if(ret[i]!=a[i]) u++;
		for (int i=0; i<n; i++)
			if(ret[i]!=b[i]) v++;
		if(u!=1||v!=1) swap(ret[missing[0]], ret[missing[1]]);
	}
	for (int i=0; i<n; i++) {
		if(i) cout << " ";
		cout << ret[i];
	}
	cout << endl;
	return 0;
}
