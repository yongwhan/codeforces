#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
const int inf=2e9+777;
const int N=1e5+777;

int s,b,a[N];
ii d[N];

int main(){
	int s,b;
	cin>>s>>b;
	for (int i=1; i<=s; i++) cin>>a[i];
	for (int i=1; i<=b; i++) cin>>d[i].first>>d[i].second;
	sort(d+1,d+b+1);
	for (int i=1; i<=b; i++)
		d[i].second+=d[i-1].second;
	for (int i=1; i<=s; i++) {
		ii key={a[i],inf};
		int x=upper_bound(d+1,d+b+1,key)-d-1;
		cout<<d[x].second<<" ";
	}
	cout<<endl;
	return 0;
} 
