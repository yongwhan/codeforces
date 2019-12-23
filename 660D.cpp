#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> x(n), y(n);
	for (int i=0; i<n; i++)
		cin>>x[i]>>y[i];
	map<ii,int> ct;
	for (int i=0; i<n; i++)
		for (int j=i+1; j<n; j++)
			ct[{x[i]+x[j],y[i]+y[j]}]++;
	int ret=0;
	for (auto it : ct)
		ret+=it.second*(it.second-1)/2;
	cout << ret << endl;
	return 0;
}
