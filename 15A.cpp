#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	set<int> cand;
	int n,t; cin>>n>>t; t<<=1;
	int x,a;
	set<int> bad;
	for (int i=0; i<n; i++) {
		cin>>x>>a; x<<=1; a<<=1;
		int u=x-a/2, v=x+a/2;
		cand.insert(u);
		cand.insert(v);
		for (int j=u; j<=v; j++)
			bad.insert(j);
	}
	set<ii> st;
	for (auto it : cand) {
		for (int dir=-1; dir<=1; dir++) if(dir) {
			bool ok=true;

			for (int i=1; i<t; i++) {
				int x=it+dir*i;
				if(bad.find(x)!=bad.end()) {
					ok=false;
					break;
				}
			}
			if(ok) {
				int p=it, q=it+dir*t;
				if(p>q) swap(p,q);
				st.insert({p,q});
			}
		}
	}
	cout << st.size() << endl;
	return 0;
}
