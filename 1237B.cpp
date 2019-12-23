#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,x; cin>>n;
	map<int,int> order;
	for (int i=0; i<n; i++)
		cin>>x, order[x]=n-1-i;
	vector<int> v(n);
	for (int i=0; i<n; i++)
		cin>>x, v[n-1-i]=order[x];
	vector<int> w(n,0);
	for (int i=1; i<n; i++)
		w[i]=max(w[i-1],v[i-1]+1);
	int ret=0;
	for (int i=0; i<n; i++)
		if(w[i]>v[i])
			ret++;
	cout<<ret<<endl;
	return 0;
}
