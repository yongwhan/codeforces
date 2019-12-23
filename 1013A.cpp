#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t,n,x=0,y=0; cin>>n;
	for (int i=0; i<n; i++)
		cin>>t, x+=t;
	for (int i=0; i<n; i++)
		cin>>t, y+=t;
	cout << ((x>=y) ? "Yes" : "No") << endl;
	return 0;
}
