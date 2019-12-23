#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int inf=1e9+77, mx=1e7+77;

vector<bool> exist(mx,false);

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k; cin>>n>>k;
	vector<int> a(n);
	for (int i=0; i<n; i++) cin>>a[i], exist[a[i]]=true;
	int q,x; cin>>q;
	while(q--) {
		cin>>x;
		int ret=inf;
		for (int i=0; i<n; i++) {
			for (int t=0; t<=k; t++) {
				int z=x-a[i]*t;
				if(z<0) continue;
				for (int j=1; j+t<=k; j++) {
					if(z%j==0) {
						int cur=z/j;
						if(cur<mx&&exist[cur]) {
							ret=min(ret,j+t);
						}
					}
				}
			}
		}
		cout << ((ret==inf) ? -1 : ret) << endl;
	}
	return 0;
}
