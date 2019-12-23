#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n; string s;
	set<set<char>> ret;
	for (int i=0; i<n; i++) {
		cin>>s;
		set<char> st(s.begin(),s.end());
		ret.insert(st);
	}
	cout << ret.size() << endl;
	return 0;
}
