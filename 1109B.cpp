#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

bool palin(string &s) {
	int n=s.size();
	for (int i=0; i<n/2; i++)
		if(s[i]!=s[n-1-i])
			return false;
	return true;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	int n=s.size();
	if(n%2) {
		set<char> st;
		for (int i=0; i<n; i++)
			if(i!=n/2)
				st.insert(s[i]);
		cout << (st.size()>1 ? "2" : "Impossible") << endl;
		return 0;
	}

	set<char> st(s.begin(), s.end());
	for (int i=1; i<n; i++) {
		string t=s.substr(i)+s.substr(0,i);
		if(palin(t)&&s!=t) {
			cout << 1 << endl;
			return 0;
		}
	}
	cout << (st.size()>1 ? "2" : "Impossible") << endl;
	return 0;
}
