#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; string s; cin>>n>>s;
	int one=0, zero=0;
	for (int i=0; i<n; i++)
		if(s[i]=='1') one++;
		else zero++;
	if(one!=zero) {
		cout << 1 << endl << s << endl;
		return 0;
	} else {
		cout << 2 << endl << s[0] << " " << s.substr(1) << endl;
		return 0;
	}

	return 0;
}
