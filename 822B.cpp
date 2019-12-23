#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<map>
#include<string>
#include<iostream>
using namespace std;

int main() {
	int n,m; cin>>n>>m;
	string s,t; cin>>s>>t;
	vector<int> ret;
	int ans=n+1;
	for (int i=0; i<m; i++) {
		string u=t.substr(i,n);
		int l=u.size();
		if(n==l) {
			int cur=0;
			vector<int> tmp;
			for (int j=0; j<n; j++) {
				if(s[j]!=u[j]) {
					cur++;
					tmp.push_back(j+1);
				}
			}

			if(ans>cur) {
				ans=cur;
				ret=tmp;
			}
		}
	}

	cout << ans << endl;
	for (int i=0; i<ans; i++) {
		if(i) cout << " ";
		cout << ret[i];
	}
	cout << endl;
	return 0;
}
