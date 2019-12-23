#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	string s; cin>>s;
	for (int i=0; i<n; i++)
		s[i]=tolower(s[i]);
	set<char> st(s.begin(), s.end());
	cout << (st.size()==26 ? "YES" : "NO") << endl;
	return 0;
}
