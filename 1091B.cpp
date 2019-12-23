#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	map<ii, int> mp;
	vector<ii> p(n),q(n);
	int x,y;
	for (int i=0; i<n; i++)
		cin>>x>>y, p[i]={x,y};
	for (int i=0; i<n; i++)
		cin>>x>>y, q[i]={x,y};
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++)
			mp[{p[i].first+q[j].first, p[i].second+q[j].second}]++;
	for (auto it : mp)
		if(it.second==n) {
			cout << it.first.first << " " << it.first.second << endl;
			return 0;
		}
	return 0;
}
