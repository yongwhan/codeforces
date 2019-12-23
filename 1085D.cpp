#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; double s; cin>>n>>s;
	vector<int> deg(n,0);
	for (int i=0; i<n-1; i++) {
		int x,y; cin>>x>>y; x--; y--;
		deg[x]++; deg[y]++;
	}
	int ct=0;
	for (auto d : deg)
		if(d==1)
			ct++;
	cout << setprecision(10) << fixed << 2*s/ct << endl;
	return 0;
}
