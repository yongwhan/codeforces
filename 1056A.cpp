#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,x; cin>>n;
	map<int,int> ct;
	for (int i=0; i<n; i++) {
		int r; cin>>r;
		for (int j=0; j<r; j++) {
			cin>>x;
			ct[x]++;
		}
	}

	for (auto it : ct)
		if(it.second==n)
			cout << it.first << " ";
	cout << endl;
	return 0;
}
