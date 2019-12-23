#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,q; cin>>n;
	vector<int> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i], a[i]--;
	cin>>q;
	while(q--) {
		int p,x,y; cin>>p>>x>>y; x--; y--;
		if(p==2) {
			swap(a[x],a[y]);
			continue;
		}
		int ret=0;
		while(x<=y) {
			for (int i=0; i<n; i++)
				if(a[i]==x)
					x++;
			ret++;
		}
		cout << ret << endl;
	}
	return 0;
}
