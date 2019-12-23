#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;

int main() {
	int n,m,d,x; scanf("%d %d %d", &n, &m, &d);
	set<ii> a;
	for (int i=0; i<n; i++) scanf("%d", &x), a.insert({x,i});
	map<int,int> ct;
	int cur=0;
	while(!a.empty()) {
		cur++;
		auto it=a.begin();
		while(it!=a.end()) {
			ct[it->second]=cur;
			a.erase(*it);
			it=a.lower_bound({it->first+d+1, -1});
		}
	}
	printf("%d\n", cur);
	for (auto it : ct)
		printf("%d ", it.second);
	printf("\n");
	return 0;
}
