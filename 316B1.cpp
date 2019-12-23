#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,x; cin>>n>>x; x--;
	vector<int> a(n), indeg(n,0);
	for (int i=0; i<n; i++) {
		cin>>a[i], a[i]--;
		if(a[i]>=0)
			indeg[a[i]]++;
	}
	vector<int> block;
	int offset;
	for (int i=0; i<n; i++) {
		if(indeg[i]==0) {
			int len=0, t=i, lenx=0;
			bool hit=false;
			while(1) {
				if(t==-1) break;
				if(hit)
					lenx++;
				if(t==x)
					hit=true;
				t=a[t]; len++;
			}
			if(hit) offset=lenx;
			else block.push_back(len);
		}
	}

	set<int> dp={0}, dp_next;
	for (auto &b : block) {
		dp_next=dp;
		for (auto t=dp.rbegin(); t!=dp.rend(); t++)
			dp_next.insert(*t+b);
		dp=dp_next;
	}

	for (auto it : dp)
		cout << it+1+offset << endl;
	return 0;
}
