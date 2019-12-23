#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	map<int,vector<int>> idx;
	for (int i=0; i<n; i++) {
		int a; cin>>a;
		idx[a].push_back(i);
	}

	auto it=idx.begin();
	vector<int> v=(*it).second;
	int ret=1e9, sz=v.size();
	for (int i=0; i<sz-1; i++)
		ret=min(ret,v[i+1]-v[i]);
	cout << ret << endl;
	return 0;
}
