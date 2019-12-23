#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,x; cin>>n;
	vector<int> v[2];
	for (int i=0; i<n; i++)
		cin>>x, v[x%2].push_back(i+1);
	cout << (v[0].size()==1 ? v[0][0] : v[1][0]) << endl;
	return 0;
}
