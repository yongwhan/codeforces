#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n);
	for (int i=0; i<n; i++) cin>>a[i];
	int l=1, r=0;
	string s; cin>>s;
	s+='0';
	for (int i=0; i<n; i++) {
		r++;
		if(s[i]=='0') sort(a.begin()+l-1, a.begin()+r), l=r+1;
	}
	vector<int> b=a;
	sort(b.begin(),b.end());
	if(a==b) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
