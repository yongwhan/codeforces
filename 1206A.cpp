#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i];
	int m; cin>>m;
	vector<int> b(m);
	for (int i=0; i<m; i++)
		cin>>b[i];
	cout << *max_element(a.begin(),a.end()) << " " << *max_element(b.begin(),b.end()) << endl;
	return 0;
}
