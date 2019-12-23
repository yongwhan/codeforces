#include<cstdio>
#include<iomanip>
#include<cmath>
#include<algorithm>
#include<sstream>
#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<map>
#include<string>
#include<iostream>
using namespace std;

typedef long long ll;

const int mx=2e5+77;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k,q,l,r,a,b,cur=0; cin>>n>>k>>q;
	vector<int> ct(mx,0), mark(mx,0), cum(mx,0);
	for (int i=0; i<n; i++) cin>>l>>r, mark[l]++, mark[r+1]--;
	for (int i=0; i<mx; i++) cur+=mark[i], ct[i]=cur;
	for (int i=1; i<mx; i++) cum[i]=cum[i-1]+int(ct[i]>=k);
	for (int i=0; i<q; i++) cin>>a>>b, cout<<cum[b]-cum[a-1]<<endl;
	return 0;
}
