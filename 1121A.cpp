#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m,k; cin>>n>>m>>k;
	vector<int> p(n), s(n), c(k);
	for (int i=0; i<n; i++)
		cin>>p[i];
	for (int i=0; i<n; i++)
		cin>>s[i];
	for (int i=0; i<k; i++)
		cin>>c[i], c[i]--;

	map<int,int> mx;
	for (int i=0; i<n; i++)
		mx[s[i]]=max(mx[s[i]], p[i]);
	int ret=0;
	for (int i=0; i<k; i++)
		if(p[c[i]]<mx[s[c[i]]])
			ret++;
	cout << ret << endl;
	return 0;
}
