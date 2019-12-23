#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	set<int> poss;
	for (int i=0; i<100; i++)
		for (int j=0; j<100; j++)
			poss.insert(3*i+7*j);
	int n,x; cin>>n;
	for (int i=0; i<n; i++) {
		cin>>x;
		if(poss.find(x)==poss.end()) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	return 0;
}
