#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	set<int> y;
	int x;
	for (int i=0; i<n; i++)
		cin>>x, y.insert(x);
	while(1) {
		int val=*y.rbegin(), nxt=val;
		while(nxt&&y.find(nxt)!=y.end()) nxt>>=1;
		if(nxt) y.erase(val), y.insert(nxt);
		else break;
	}
	for (auto t : y)
		cout << t << " ";
	cout << endl;
	return 0;
}
