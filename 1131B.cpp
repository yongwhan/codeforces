#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n+1,0), b(n+1,0);
	for (int i=1; i<=n; i++)
		cin>>a[i]>>b[i];
	int ret=1;
	for (int i=1; i<=n; i++)
		ret+=max(0, min(a[i],b[i])-max(a[i-1],b[i-1])+(a[i-1]!=b[i-1]));
	cout << ret << endl;
	return 0;
}
