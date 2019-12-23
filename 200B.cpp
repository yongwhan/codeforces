#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	double x=0, p;
	for (int i=0; i<n; i++)
		cin>>p, x+=p;
	cout << x/n << endl;
	return 0;
}
