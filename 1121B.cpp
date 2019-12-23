#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i];
	map<int,int> ct;
	for (int i=0; i<n; i++)
		for (int j=i+1; j<n; j++)
			ct[a[i]+a[j]]++;
	int ret=0;
	for (auto it : ct)
		ret=max(ret,it.second);
	cout << ret << endl;
	return 0;
}
