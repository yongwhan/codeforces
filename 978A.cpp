#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i];
	reverse(a.begin(), a.end());
	set<int> st;
	vector<int> ret;
	for (int i=0; i<n; i++) {
		int cur=a[i];
		if(st.find(cur)!=st.end())
			continue;
		st.insert(cur);
		ret.push_back(cur);
	}
	reverse(ret.begin(), ret.end());
	cout << ret.size() << endl;
	for (auto x : ret)
		cout << x << " ";
	cout << endl;
	return 0;
}
