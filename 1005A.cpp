#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n);
	for (int i=0; i<n; i++) cin>>a[i];
	vector<int> ret;
	for (int i=0; i<n-1; i++)
		if(a[i+1]==1)
			ret.push_back(a[i]);
	ret.push_back(a[n-1]);
	cout << ret.size() << endl;
	for (int x : ret)
		cout << x << " ";
	cout << endl;
	return 0;
}
