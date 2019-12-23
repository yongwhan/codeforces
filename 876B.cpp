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

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k,m; cin>>n>>k>>m;
	vector<int> a(n);
	for (int i=0; i<n; i++) cin>>a[i];

	map<int, vector<int> > mp;
	for (int i=0; i<n; i++)
		mp[a[i]%m].push_back(a[i]);

	for (int i=0; i<m; i++)
		if(mp[i].size()>=k) {
			cout << "Yes" << endl;
			for (int j=0; j<k; j++) {
				if(j) cout << " ";
				cout << mp[i][j];
			}
			cout << endl;
			return 0;
		}
	cout << "No" << endl;
	return 0;
}
