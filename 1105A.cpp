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
	int ret=-1, val=1e9;
	for (int x=1; x<=100; x++) {
		int cost=0;
		for (int i=0; i<n; i++) {
			int cur=1e9;
			for (int j=-1; j<=1; j++)
				cur=min(cur,abs(a[i]-(x+j)));
			cost+=cur;
		}
		if(val>cost)
			val=cost, ret=x;
	}
	cout << ret << " " << val << endl;
	return 0;
}
