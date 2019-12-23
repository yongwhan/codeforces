#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k,a; cin>>n>>k;
	map<int,int> mp;
	for (int i=1; i<=n; i++)
		cin>>a, mp[a]=i;
	if(mp.size()<k) {
		cout << "NO" << endl;
		return 0;
	}
	for (auto it : mp) {
		if(!k) break;
		cout << it.second << " ";
		k--;
	}
	cout << endl;
	return 0;
}
