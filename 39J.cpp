#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s,t; cin>>s>>t;
	string u=s, v=t;
	reverse(u.begin(), u.end());
	reverse(v.begin(), v.end());
	int n=s.size();
	vector<bool> pre(n+2,true), suf(n+2,true);
	for (int i=0; i<n; i++) {
		if(!pre[i] || s[i]!=t[i])
			pre[i+1]=false;
		if(!suf[i] || u[i]!=v[i])
			suf[i+1]=false;
	}

	set<int> st;
	for (int i=0; i<n; i++)
		if(pre[i]&&suf[n-1-i])
			st.insert(i+1);
	cout << st.size() << endl;
	for (auto it : st)
		cout << it << " ";
	if(!st.empty())
		cout << endl;
	return 0;
}
