#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,x; cin>>n>>x;
	vector<int> a(n);
	set<int> st, st2;
	bool inf=true;
	map<int,int> ct;
	for (int i=0; i<n; i++) {
		cin>>a[i];
		int y=a[i]&x;
		if(st.find(a[i])==st.end())
			st.insert(a[i]);
		else { cout << 0 << endl; return 0; }
		if(st2.find(y)==st2.end())
			st2.insert(y);
		else inf=false;
		ct[a[i]]++;
	}
	if(inf) { cout << -1 << endl; return 0; }
	for (int i=0; i<n; i++) {
		int y=a[i]&x;
		if(ct[y]>=1+int(a[i]==y)) { cout << 1 << endl; return 0; }
	}
	cout << 2 << endl;
	return 0;
}
