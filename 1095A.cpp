#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n, j=1; cin>>n; string t; cin>>t;
	for (int i=1; i<=55; i+=(++j)) {
		if(i>t.size())
			break;
		cout << t[i-1];
	}
	cout << endl;
	return 0;
}
