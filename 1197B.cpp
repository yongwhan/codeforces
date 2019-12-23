#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n);
	for (int i=0; i<n; i++) cin>>a[i];
	int idx=max_element(a.begin(),a.end())-a.begin();
	bool ret=true;
	for (int i=0; i<idx; i++)
		if(a[i]>a[i+1]) ret=false;
	for (int i=idx; i<n-1; i++)
		if(a[i]<a[i+1]) ret=false;
	cout<<(ret?"YES":"NO")<<endl;
	return 0;
}
