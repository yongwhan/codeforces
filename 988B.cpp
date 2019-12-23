#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

bool cmp(string s, string t) {
	return s.size()>t.size();
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<string> v(n);
	for (int i=0; i<n; i++) cin>>v[i];
	sort(v.begin(),v.end(),cmp);
	vector<string> ret;
	for (int i=0; i<n; i++)
		for (int j=i+1; j<n; j++)
			if(v[i].find(v[j])==string::npos) { cout << "NO" << endl; return 0; }
	reverse(v.begin(),v.end());
	cout << "YES" << endl;
	for (auto s : v) cout << s << endl;
	return 0;
}
