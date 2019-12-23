#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m,k; cin>>n>>m>>k;
	vector<int> a(n);
	vector<ii> v(n);
	for (int i=0; i<n; i++)
		cin>>a[i], v[i]={a[i],i};
	sort(v.begin(), v.end(), greater<ii>());
	vector<int> idx;
	ll ret=0;
	for (int i=0; i<m*k; i++)
		idx.push_back(v[i].second),
		ret+=v[i].first;
	sort(idx.begin(), idx.end());
	int cur=0, prev=0, iter=m;
	vector<int> p;
	int rem=m*k;
	while(1) {
		if(iter>=m*k)
			break;
		cur=idx[iter-1];
		p.push_back(cur+1);
		prev=cur+1;
		iter+=m;
	}
	cout << ret << endl;
	for (auto it : p)
		cout << it << " ";
	cout << endl;
	return 0;
}
