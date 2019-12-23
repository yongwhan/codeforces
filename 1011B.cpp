#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m,a; cin>>n>>m;
	map<int,int> ct;
	for (int i=0; i<m; i++)
		cin>>a, ct[a]++;
	for (int d=100; d>0; d--) {
		int cur=0;
		for (auto it : ct)
			cur+=it.second/d;
		if(cur>=n) {
			cout << d << endl; return 0;
		}
	}
	cout << 0 << endl;
	return 0;
}
