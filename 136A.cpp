#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,p; cin>>n;
	map<int,int> mp;
	for (int i=1; i<=n; i++)
		cin>>p, mp[p]=i;
	for (auto it : mp)
		cout << it.second << " ";
	cout << endl;
	return 0;
}
