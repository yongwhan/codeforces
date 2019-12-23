#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n), b(n), c(n);
	for (int i=0; i<n; i++)
		cin>>b[i], c[i]=b[i];
	sort(c.begin(), c.end());
	map<int,int> mp;
	for (int i=0; i<n; i++)
		mp[c[i]]=i;
	for (int i=0; i<n; i++)
		a[i]=mp[b[i]];

	vector<vector<int>> ret;
	for (int i=0; i<n; i++) {
		if(a[i]!=-1) {
			vector<int> v;
			int cur=a[i];
			while(1) {
				int nxt=a[cur];
				if(nxt==-1) break;
				v.push_back(nxt);
				a[cur]=-1;
				cur=nxt;
			}
			ret.push_back(v);
		}
	}

	cout << ret.size() << endl;
	for (auto v : ret) {
		cout << v.size();
		sort(v.begin(),v.end());
		for (auto x : v)
			cout << " " << x+1;
		cout << endl;
	}
	return 0;
}
