#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mx=1e6;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i];
	a.push_back(1);
	a.push_back(mx);
	sort(a.begin(), a.end());
	n+=2;
	int ret=INT_MAX;
	for (int i=0; i<n-1; i++)
		ret=min(ret,max(mx-a[i+1],a[i]-1));
	cout<<ret<<"\n";
	return 0;
}
