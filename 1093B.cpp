#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		string s; cin>>s;
		set<char> st(s.begin(), s.end());
		if(st.size()==1) cout << -1 << endl;
		else {
			sort(s.begin(), s.end());
			cout << s << endl;
		}
	}
	return 0;
}
