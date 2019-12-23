#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int k; cin>>k;
	map<int,set<int>> poss;
	map<int,vector<ii>> ret;
	for (int j=0; j<k; j++) {
		int n,sum=0; cin>>n;
		vector<int> a(n);
		for (int i=0; i<n; i++) cin>>a[i], sum+=a[i];
		for (int i=0; i<n; i++) {
			int cur=sum-a[i];
			if(poss[cur].find(j)==poss[cur].end()) {
				poss[cur].insert(j);
				ret[cur].push_back({j,i});
			}
		}
	}

	for (auto it : ret) {
		if(it.second.size()>1) {
			cout << "YES" << endl;
			ii x=it.second[0], y=it.second[1];
			cout << x.first+1 << " " << x.second+1 << endl;
			cout << y.first+1 << " " << y.second+1 << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}
