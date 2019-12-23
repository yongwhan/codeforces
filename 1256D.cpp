#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int q; cin>>q;
	while(q--) {
		ll n,k; cin>>n>>k;
		string s; cin>>s;
		vector<int> pre(n,0);
		int ct=0;
		for (int i=0; i<n; i++)
			if(s[i]=='1') ct++;
			else pre[i]=ct;
		string t;
		for (int i=0; i<n; i++) {
			if(pre[i]<k) k-=pre[i];
			else {
				t+=string(k,'1');
				t+='0';
				t+=string(pre[i]-k,'1');
				t+=string(i-pre[i],'0');
				reverse(t.begin(),t.end());
				t+=s.substr(i+1);
				break;
			}
		}
		if(t.empty()) {
			t+=string(n-ct,'0');
			t+=string(ct,'1');
		}
		cout<<t<<"\n";
	}
	return 0;
}
