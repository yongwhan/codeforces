#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m,k,x; cin>>n>>m>>k;
	vector<int> d(m);
	map<int,int> ct;
	for (int i=0; i<m; i++)
		cin>>d[i], ct[i]=0;
	for (int i=0; i<k; i++) {
		cin>>x;
		for (int j=0; j<m; j++)
			if(x%d[j]==0)
				ct[j]++;
	}
	int mn=2e9;
	for (auto it : ct)
		mn=min(mn,it.second);
	vector<int> ret;
	for (auto it : ct)
		if(it.second==mn)
			ret.push_back(it.first+1);
	cout << ret.size() << endl;
	for (auto it : ret)
		cout << it << " ";
	cout << endl;
	return 0;
}
