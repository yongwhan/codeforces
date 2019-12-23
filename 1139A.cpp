#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	ll ret=0;
	char ch;
	for (int i=1; i<=n; i++) {
		cin>>ch;
		if((ch-'0')%2==0)
			ret+=i;
	}
	cout << ret << endl;
	return 0;
}
