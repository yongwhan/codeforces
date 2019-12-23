#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> deg(n,0);
	int x,y;
	for (int i=0; i<n-1; i++)
		cin>>x>>y, x--, y--, deg[x]++, deg[y]++;
	int ret=0;
	for (auto it : deg)
		if(it==1)
			ret++;
	cout << ret << endl;
	return 0;
}
