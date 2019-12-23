#include<bits/stdc++.h>
using namespace std;

const int mx=2e5+777;

vector<priority_queue<int>> v(mx);
vector<int> ct(mx);

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k,a; scanf("%d %d",&n,&k);
	for (int c=0; c<n; c++) {
		scanf("%d",&a);
		int cur=0;
		do {
			v[a].push(cur);
			ct[a]+=cur;
			if(v[a].size()>k)
				ct[a]-=v[a].top(), v[a].pop();
			a/=2; cur++;
		} while(a);
	}
	int ret=INT_MAX;
	for (int i=0; i<mx; i++)
		if(v[i].size()>=k)
			ret=min(ret,ct[i]);
	printf("%d\n",ret);
	return 0;
}
