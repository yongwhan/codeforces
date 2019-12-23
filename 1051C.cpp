#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	map<int,vector<int>> ct, idx;
	map<int,int> count;
	vector<int> a(n);
	for (int i=0; i<n; i++) {
		cin>>a[i];
		idx[a[i]].push_back(i);
		count[a[i]]++;
	}
	for (auto it : count)
		ct[min(it.second,3)].push_back(it.first);
	string ret=string(n,'B');
	if(ct[1].size()%2 && ct[3].empty()) {
		cout << "NO" << endl;
		return 0;
	}
	cout << "YES" << endl;
	bool parity=false;
	for (auto it : ct[1])
		for (auto it2 : idx[it])
			ret[it2]='A'+parity,
			parity=!parity;

	if(ct[1].size()%2) {
		for (auto it : idx[ct[3][0]])
			ret[it]='A'+(1-parity);
		ret[idx[ct[3][0]][0]]='A'+parity;
	}
	cout << ret << endl;
	return 0;
}
