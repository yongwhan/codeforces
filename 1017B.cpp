#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	string a,b; cin>>a>>b;
	map<string,ll> ct;
	for (int i=0; i<n; i++) {
		string x; x+=a[i]; x+=b[i];
		ct[x]++;
	}
	cout << (ct["00"]+ct["01"])*ct["10"]+ct["00"]*ct["11"] << endl;
	return 0;
}
