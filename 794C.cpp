#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s,t,r,l; cin>>s>>t;
	sort(s.begin(),s.end());
	sort(t.rbegin(),t.rend());
	int n=s.size();
	deque<char> a,b;
	for (int i=0; i<(n+1)/2; i++) a.push_back(s[i]);
	for (int i=0; i<n/2; i++) b.push_back(t[i]);
	bool rev=false;
	for (int i=0; i<n; i++) {
		if(i%2==0) {
			if(!b.empty()&&a[0]>=b[0]) rev=true;
			if(rev) r+=a.back(), a.pop_back();
			else l+=a.front(), a.pop_front();
		} else {
			if(!a.empty()&&a[0]>=b[0]) rev=true;
			if(rev) r+=b.back(), b.pop_back();
			else l+=b.front(), b.pop_front();
		}
	}
	reverse(r.begin(),r.end());
	cout<<l<<r<<endl;
	return 0;
}
