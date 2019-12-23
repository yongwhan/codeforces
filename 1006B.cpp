#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

bool cmp(ii a, ii b) {
	if(a.first==b.first) return a.second>b.second;
	else return a.first>b.first;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k,ret=0,x; cin>>n>>k;
	vector<ii> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i].first, a[i].second=i;
	sort(a.begin(),a.end(),cmp);
	vector<int> pos(k+1);
	for (int i=0; i<k; i++) ret+=a[i].first, pos[i]=a[i].second;
	pos[k]=-1;
	sort(pos.begin(),pos.end());
	cout << ret << endl;
	int rem=n;
	for (int i=0; i<k-1; i++)
		cout << pos[i+1]-pos[i] << " ", rem-=pos[i+1]-pos[i];
	cout << rem << endl;
	return 0;
}
