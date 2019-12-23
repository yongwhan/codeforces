#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n);
	map<int,int> ct;
	for (int i=0; i<n; i++)
		cin>>a[i],
		ct[a[i]]++;
	ll ret=0;
	set<int> vis;
	for (int i=0; i<n; i++) {
		int x=a[n-1-i];
		ct[x]--;
		if(!ct[x]) ct.erase(x);
		if(vis.find(x)==vis.end())
			vis.insert(x),
			ret+=ct.size();
	}
	cout << ret << endl;
	return 0;
}
