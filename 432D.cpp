#include<bits/stdc++.h>
using namespace std;

vector<int> z_function(string &s) {
	int n = (int) s.length();
	vector<int> z(n);
	for (int i = 1, l = 0, r = 0; i < n; ++i) {
		if (i <= r) z[i] = min (r - i + 1, z[i - l]);
		while (i + z[i] < n && s[z[i]] == s[i + z[i]]) ++z[i];
		if (i + z[i] - 1 > r) l = i, r = i + z[i] - 1;
	}
	return z;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	string s; cin>>s;
	int n=s.size();
	vector<int> z=z_function(s), ct(n+1,0), cumul(n+1,0), ret;
	z[0]=n;
	for (auto x : z) ct[x]++;
	for (int i=n-1; i>=0; i--) cumul[i]=cumul[i+1]+ct[i+1];
	for (int i=0; i<n; i++) if(z[n-1-i]==i+1) ret.push_back(i+1);
	cout << ret.size() << endl;
	for (auto x : ret) cout << x << " " << cumul[x-1] << endl;
	return 0;
}
