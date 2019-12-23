#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	string s;
	map<string, int> count;
	for (int i=0; i<t; i++) {
		char op; cin>>op>>s;
		while(s.size()<20)
			s='0'+s;
		reverse(s.begin(), s.end());
		if(op!='?') {
			string cur;
			for (auto it : s) {
				cur+=char((it-'0')%2+'0');
				if(op=='+') count[cur]++;
				else count[cur]--;
			}
		} else
			cout << count[s] << endl;
	}
	return 0;
}
