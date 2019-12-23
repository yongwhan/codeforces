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

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	int ret=m;
	for (int i=0; i<m; i++) {
		int k; cin>>k;
		set<int> st;
		int v;
		for (int j=0; j<k; j++) {
			cin>>v;
			st.insert(v);
		}

		bool ok=false;
		map<int,int> mp;
		for (set<int>::iterator it=st.begin(); it!=st.end(); it++) {
			int cur=abs(*it);
			mp[cur]++;
			if(mp[cur]==2) ok=true;
		}
		if(ok) ret--;
	}

	if(ret) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
