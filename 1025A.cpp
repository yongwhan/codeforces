#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	string s; cin>>s;
	set<char> st(s.begin(), s.end());
	if(n==1) {
		cout << "Yes" << endl;
		return 0;
	}

	cout << (st.size()==n ? "No" : "Yes") << endl;
	return 0;
}
