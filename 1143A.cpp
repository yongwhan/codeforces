#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,x,even=-1,odd=-1;
	cin>>n;
	for (int i=1; i<=n; i++) {
		cin>>x;
		if(x%2) odd=i;
		else even=i;
	}
	cout << min(odd,even) << endl;
	return 0;
}
