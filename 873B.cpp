#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; string s; cin>>n>>s;
	map<int,int> mp;
	int ret=0,cur=0;
	mp[cur]=-1;
	for (int i=0; i<n; i++) {
		if(s[i]=='1') cur++;
		else cur--;
		if(mp.find(cur)==mp.end()) mp[cur]=i;
		else ret=max(ret,i-mp[cur]);
	}
	cout << ret << endl;
	return 0;
}
