#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	string s; cin>>s;
	string p="RGB";
	sort(p.begin(), p.end());
	int ret=1e9;
	string ans;
	do {
		string cur;
		int val=0;
		for (int i=0; i<n; i++) {
			cur+=p[i%3];
			if(cur[i]!=s[i])
				val++;
		}
		if(val<ret)
			ret=val, ans=cur;
	} while(next_permutation(p.begin(), p.end()));
	cout << ret << endl;
	cout << ans << endl;
	return 0;
}
