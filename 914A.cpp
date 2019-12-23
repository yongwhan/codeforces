#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	set<int> perf;
	for (int y=0; y<=1050; y++)
		perf.insert(y*y);
	int ret=-1e9,n,a; cin>>n;
	for (int i=0; i<n; i++) {
		cin>>a;
		if(perf.find(a)==perf.end()) ret=max(ret,a);
	}
	cout << ret << endl;
	return 0;
}
