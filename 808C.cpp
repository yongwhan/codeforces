#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,w; cin>>n>>w;
	vector<ii> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i].first, a[i].second=i;
	vector<int> ret(n,0);
	for (int i=0; i<n; i++)
		ret[i]=(a[i].first+1)/2, w-=ret[i];
	sort(a.begin(),a.end(),greater<ii>());
	if(w<0) {
		cout << -1 << endl;
		return 0;
	}
	for (int i=0; i<n; i++) {
		int cur=min(a[i].first-ret[a[i].second],w);
		ret[a[i].second]+=cur;
		w-=cur;
	}
	for (int i=0; i<n; i++) {
		if(i) cout << " ";
		cout << ret[i];
	}
	cout << endl;
	return 0;
}
