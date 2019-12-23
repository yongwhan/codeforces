#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	map<int,ll> ct;
	for (int c=0; c<n; c++) {
		string s; cin>>s;
		int l=s.size(), cur=0;
		for (int i=0; i<l; i++) {
			if(s[i]=='(') cur++;
			else {
				cur--;
				if(cur<0)
					break;
			}
		}
		if(cur>=0) ct[cur]++;
		cur=0;
		for (int i=l-1; i>=0; i--) {
			if(s[i]==')') cur--;
			else {
				cur++;
				if(cur>0)
					break;
			}
		}
		if(cur<0) ct[cur]++;
	}
	ll ret=0;
	for (int i=0; i<1e6; i++)
		ret+=ct[i]*ct[-i];
	cout << ret << endl;
	return 0;
}
