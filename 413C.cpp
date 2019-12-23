#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,m; cin>>n>>m;
	vector<ll> a(n), b(m);
	for (int i=0; i<n; i++)
		cin>>a[i];
	for (int i=0; i<m; i++)
		cin>>b[i], b[i]--;
	set<int> st(b.begin(), b.end());
	ll ret=0;
	vector<ll> auc;
	for (int i=0; i<n; i++)
		if(st.find(i)==st.end()) ret+=a[i];
		else auc.push_back(a[i]);
	sort(auc.begin(), auc.end());
	for (int i=m-1; i>=0; i--)
		if(auc[i]>ret) ret+=auc[i];
		else ret<<=1;
	cout << ret << endl;
	return 0;
}
