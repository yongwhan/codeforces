#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		int n; cin>>n;
		vector<int> q(n), p(n,-1);
		for (int i=0; i<n; i++)
			cin>>q[i];
		p[0]=q[0];
		set<int> cand;
		for (int i=1; i<=n; i++)
			cand.insert(i);
		cand.erase(p[0]);
		for (int i=1; i<n; i++)
			if(q[i]!=q[i-1])
				p[i]=q[i], cand.erase(p[i]);
		for (int i=0; i<n; i++)
			if(p[i]==-1)
				p[i]=*cand.begin(), cand.erase(cand.begin());
		bool ok=true;
		int cur=p[0];
		for (int i=1; i<n; i++) {
			cur=max(cur,p[i]);
			if(cur!=q[i])
				ok=false;
		}
		if(!ok) cout<<-1<<"\n";
		else {
			for (int i=0; i<n; i++)
				cout<<p[i]<<" ";
			cout<<"\n";
		}
	}
	return 0;
}
