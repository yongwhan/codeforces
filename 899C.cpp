#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n; cin>>n;
	ll sum=n*(n+1)/2, target=sum/2, ret=sum%2;
	set<int> used;
	for (int i=n; i>=1; i--)
		if(target>=i)
			target-=i, used.insert(i);
	cout << ret << endl;
	cout << used.size();
	for (auto x : used)
		cout << " " << x;
	cout << endl;
	return 0;
}
