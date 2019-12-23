#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int inf=1e9+77;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	set<int> rem;
	for (int i=0; i<n; i++)
		rem.insert(i);
	map<int, vector<int>> mp;
	for (int i=0; i<m; i++) {
		int l,a; cin>>l;
		for (int j=0; j<l; j++) {
			cin>>a; a--;
			mp[i].push_back(a);
			rem.erase(a);
		}
	}
	for (auto it : rem)
		mp[inf].push_back(it);

	vector<int> p(n);
	int iter=0;
	for (auto it : mp)
		for (auto x : it.second)
			p[x]=iter++;

	map<int,int> back;
	for (int i=0; i<n; i++) {
		if(rem.find(i)==rem.end()) back[p[i]]=i;
		else back[p[i]]=-1;
	}

	vector<ii> ret;
	set<int> vis;
	set<int> rem2=rem;
	for (auto x : rem) {
		int cur=x;
		while(1) {
			if(vis.find(cur)!=vis.end()) break;
			vis.insert(cur);
			int nxt=back[cur];
			if(nxt==-1) break;
			ret.push_back({nxt,cur});
			rem2.insert(nxt);
			rem2.erase(cur);
			cur=nxt;
		}
	}
	rem=rem2;

	int ety=*rem.rbegin();
	for (int x=0; x<n; x++) {
		if(vis.find(x)==vis.end()&&rem.find(x)==rem.end()) {
			int cur=x;
			ret.push_back({cur,ety});
			bool done=false;
			while(1) {
				if(vis.find(cur)!=vis.end()) break;
				vis.insert(cur);
				int nxt=back[cur];
				if(nxt==-1||nxt==x) break;
				ret.push_back({nxt,cur});
				done=true;
				cur=nxt;
			}
			if(done) ret.push_back({ety,cur});
			else ret.pop_back();
		}
	}

	cout << ret.size() << endl;
	for (auto it : ret)
		cout << it.first+1 << " " << it.second+1 << endl;
	return 0;
}
