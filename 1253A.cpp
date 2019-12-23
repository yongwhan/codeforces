#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

bool ok(const vector<int> &a, const vector<int> &b, int n) {
	set<int> st;
	vector<int> idx;
	for (int i=0; i<n; i++) {
		if(a[i]>b[i])
			return false;
		if(a[i]==b[i])
			continue;
		int cur=b[i]-a[i];
		st.insert(cur);
		idx.push_back(i);
	}
	if(st.empty())
		return true;

	if(st.size()!=1)
		return false;
	int sz=idx.size();
	for (int i=0; i<sz-1; i++)
		if(idx[i+1]!=idx[i]+1)
			return false;
	return true;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t-->0) {
		int n; cin>>n;
		vector<int> a(n), b(n);
		for (int i=0; i<n; i++)
			cin>>a[i];
		for (int i=0; i<n; i++)
			cin>>b[i];
		cout<<(ok(a,b,n)?"YES":"NO")<<"\n";
	}
	return 0;
}
