#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,s; cin>>n>>s; s--;
	vector<int> a(n), b(n);
	for (int i=0; i<n; i++) cin>>a[i];
	for (int i=0; i<n; i++) cin>>b[i];
	if(!a[0]) { cout << "NO" << endl; return 0; }
	if(a[s]) { cout << "YES" << endl; return 0; }
	if(!b[s]) { cout << "NO" << endl; return 0; }
	for (int i=s+1; i<n; i++)
		if(a[i]&&b[i]) { cout << "YES" << endl; return 0; }
	cout << "NO" << endl;
	return 0;
}
