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
	vector<int> v={0,4,8,15,16,23,42}, ct(7,0);
	ct[0]=1e9;
	map<int,int> idx;
	for (int i=0; i<7; i++)
		idx[v[i]]=i;
	for (auto x : a) {
		if(!idx.count(x)) continue;
		int cur=idx[x];
		if(ct[cur-1]) ct[cur-1]--, ct[cur]++;
	}
	cout<<n-ct[6]*6<<endl;
	return 0;
}
