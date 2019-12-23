#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<string> s(3);
	for (int i=0; i<3; i++) cin>>s[i];
	int l=s[0].size();
	vector<int> ret(3,0);
	int mx=0;
	for (int i=0; i<3; i++) {
		map<char,int> ct;
		int cur=0;
		for (auto ch : s[i])
			ct[ch]++;
		for (auto it : ct)
			ret[i]=max(ret[i],it.second);
		if(n==1&&ret[i]==l)
			ret[i]--;
		else
			ret[i]=min(l,ret[i]+n);
		mx=max(mx,ret[i]);
	}
	int idx=-1;
	for (int i=0; i<3; i++) {
		if(mx==ret[i]) {
			if(idx==-1) idx=i;
			else {
				cout << "Draw" << endl; return 0;
			}
		}
	}
	vector<string> lst={"Kuro", "Shiro", "Katie"};
	cout << lst[idx] << endl;
	return 0;
}
