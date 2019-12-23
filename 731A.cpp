#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	int n=s.size(), ret=0;
	s='a'+s;
	for (int i=0; i<n; i++) {
		int d=abs(s[i]-s[i+1]);
		ret+=min(d,26-d);
	}
	cout << ret << endl;
	return 0;
}
