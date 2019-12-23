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

vector<bool> h(2e6, false);

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m,k,pos=1; cin>>n>>m>>k;
	for (int i=0; i<m; i++) {
		int x; cin>>x; h[x]=true;
	}
	for (int i=0; i<k; i++) {
		if(h[pos]) break;
		int u,v; cin>>u>>v;
		if(pos==u) pos=v;
		else if(pos==v) pos=u;
	}
	cout << pos << endl;
	return 0;
}
