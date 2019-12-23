#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k; cin>>n>>k;
	vector<int> a(n);
	map<int,int> ct;
	for (int i=0; i<n; i++)
		cin>>a[i], ct[a[i]]++;
	int ret=0;
	for (auto it : ct)
		ret=max(ret,(it.second+(k-1))/k * k);
	ret*=ct.size();
	ret-=n;
	cout << ret << endl;
	return 0;
}
