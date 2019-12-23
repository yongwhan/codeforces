#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k; cin>>n>>k; n--;
	queue<int> q;
	int iter=0;
	vector<ii> ret;
	map<int,int> dist;
	dist[0]=0;
	for (int i=0; i<k; i++) q.push(++iter), ret.push_back({0,iter}), dist[iter]=1, n--;
	int x=1, y=1;
	while(1) {
		if(!n) break;
		for (int i=0; i<k; i++) {
			if(!n) break;
			int cur=q.front(); q.pop();
			int nxt=++iter; q.push(nxt);
			ret.push_back({cur,nxt});
			dist[nxt]=dist[cur]+1;
			if(i==0) x=dist[nxt];
			else if(i==1) y=dist[nxt];
			n--;
		}
	}

	cout << x+y << endl;
	for (auto e : ret) cout << e.first+1 << " " << e.second+1 << endl;
	return 0;
}
