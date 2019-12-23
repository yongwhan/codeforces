#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,x; cin>>n;
	map<int,int> idx;
	for (int i=0; i<n; i++)
		cin>>x, idx[x]=i;
	int cur=0;
	for (int i=0; i<n; i++) {
		cin>>x;
		int val=idx[x];
		cout << max(0,val-cur+1) << " ";
		cur=max(cur,val+1);
	}
	cout << endl;
	return 0;
}
