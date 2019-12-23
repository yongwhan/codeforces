#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	int a=0, b=0, x,y;
	for (int i=0; i<n; i++) {
		cin>>x>>y;
		if(x>0) a++;
		else b++;
	}

	if(a<=1||b<=1) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
