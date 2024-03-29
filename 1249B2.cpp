#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int q; cin>>q;
	while(q--) {
		int n; cin>>n;
		vector<int> p(n), len(n,0);
		for (int i=0; i<n; i++)
			cin>>p[i], p[i]--;
		set<int> vis;
		for (int i=0; i<n; i++) {
			if(vis.count(i)) continue;
			int cur=i, val=0;
			set<int> st;
			while(!vis.count(cur)) {
				vis.insert(cur);
				st.insert(cur);
				cur=p[cur];
				val++;
			}
			for (const int &x : st)
				len[x]=val;
		}
		for (int i=0; i<n; i++)
			cout<<len[i]<<" ";
		cout<<endl;
	}
	return 0;
}
