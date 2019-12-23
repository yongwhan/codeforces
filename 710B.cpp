#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> x(n);
	for (int i=0; i<n; i++) cin>>x[i];
	sort(x.begin(),x.end());
	cout << x[(n-1)/2] << endl;
	return 0;
}
