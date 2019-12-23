#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	int n=s.size(), r=0;
	vector<int> f(3,-1);
	f[0]=0;
	vector<int> z(n+1);
	for (int i=1; i<=n; i++) {
		r=(r+s[i-1]-'0')%3;
		z[i]=z[i-1];
		if(f[r]!=-1)
			z[i]=max(z[i],z[f[r]]+1);
		f[r]=i;
	}
	cout << z[n] << endl;
	return 0;
}
