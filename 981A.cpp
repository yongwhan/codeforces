#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	int n=s.size();
	set<char> st(s.begin(),s.end());
	if(st.size()==1) {
		cout << 0 << endl;
		return 0;
	}
	for (int i=0; i<n/2; i++)
		if(s[i]!=s[n-1-i]) {
			cout << n << endl;
			return 0;
		}
	cout << n-1 << endl;
	return 0;
}
