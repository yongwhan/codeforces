#include<bits/stdc++.h>
using namespace std;

bool ok(int x, vector<int> &a, set<int> st, int n, int k) {
	for (auto add : a) x+=add, st.erase(x);
	return st.empty();
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k,x,pre=0,ret=0; cin>>k>>n;
	vector<int> a(k), b(n);
	set<int> st,cand;
	for (int i=0; i<k; i++) cin>>a[i];
	for (int i=0; i<n; i++) cin>>b[i], st.insert(b[i]);
	for (int i=0; i<k; i++) pre+=a[i], cand.insert(b[0]-pre);
	for (auto x : cand) if(ok(x,a,st,n,k)) ret++;
	cout << ret << endl;
	return 0;
}
