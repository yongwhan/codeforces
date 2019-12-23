#include<bits/stdc++.h>
using namespace std;

const int mx=5005;

int C[mx][mx];

vector<int> proc(vector<int> &s) {
	vector<int> ret;
	int n=s.size();
	ret.push_back(s[0]);
	for (int i=1; i<n; i++)
		if(ret.back()!=s[i])
			ret.push_back(s[i]);
	return ret;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int len; cin>>len;
	vector<int> s(len);
	for (int i=0; i<len; i++)
		cin>>s[i];

	s=proc(s);

	vector<int> t=s;
	reverse(t.begin(), t.end());

	int n=s.size(), m=t.size();
	for (int i=0; i<=n; i++) {
		for (int j=0; j<=m; j++) {
			C[i][j]=0;
		}
	}

	for (int i=1; i<=n; i++) {
		for (int j=1; j<=m; j++) {
			if(s[i-1]==t[j-1]) C[i][j]=C[i-1][j-1]+1;
			else C[i][j]=max(C[i][j-1],C[i-1][j]);
		}
	}
	cout << n-1-(C[n][m]/2) << endl;
	return 0;
}
