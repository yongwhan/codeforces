#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<map>
#include<string>
#include<iostream>
using namespace std;

int main() {
	int n; cin>>n;
	vector<int> t(n+1);
	t[0]=0;
	for (int i=1; i<=n; i++) cin>>t[i];

	set<int> vis;
	vis.insert(0);
	int ret=0;
	for (int i=n; i>=1; i--) {
		int cur=i;
		if(vis.find(cur)==vis.end()) {
			ret++;
			while(1) {
				if(!cur) break;
				vis.insert(cur);
				int nxt=t[cur];
				if(vis.find(nxt)!=vis.end()) break;
				cur=nxt;
			}
		}
	}
	cout << ret << endl;
	return 0;
}
