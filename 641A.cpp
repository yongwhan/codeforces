#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	string s; cin>>s;
	vector<int> d(n);
	for (int i=0; i<n; i++) cin>>d[i];

	int x=0;
	for (int i=0; i<2e5; i++) {
		if(x<0||x>=n) {
			cout << "FINITE" << endl;
			return 0;
		}
		if(s[x]=='<') x-=d[x];
		else x+=d[x];
	}
	cout << "INFINITE" << endl;
	return 0;
}
