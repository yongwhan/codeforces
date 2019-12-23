#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

struct frac {
	ll a,b;
	frac(ll a_, ll b_) {
		a=a_; b=b_;
	}
};

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		int n; cin>>n;
		map<int,int> ct;
		int x;
		for (int i=0; i<n; i++) cin>>x, ct[x]++;
		bool up=false;
		for (auto it : ct) {
			if(it.second>=4) {
				for (int i=0; i<4; i++) cout << it.first << " ";
				cout << endl;
				up=true;
				break;
			}
		}
		if(up) continue;

		vector<int> cand;
		for (auto it : ct)
			if(it.second>=2)
				cand.push_back(it.first);
		int sz=cand.size();
		frac mn=frac(1e9,1);
		int idx=-1;
		for (int i=0; i<sz-1; i++) {
			int x=cand[i], y=cand[i+1];
			int p=2*(x+y), s=x*y;
			frac cur=frac(p*p,s);
			if(mn.a*cur.b>cur.a*mn.b)
				mn=cur, idx=i;
		}

		for (int i=0; i<2; i++)
			for (int j=0; j<2; j++)
				cout << cand[idx+i] << " ";
		cout << endl;
	}
	return 0;
}
