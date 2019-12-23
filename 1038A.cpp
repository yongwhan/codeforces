#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k; string s; cin>>n>>k>>s;
	map<char,int> ct;
	for (auto ch : s)
		ct[ch]++;
	int ret=1e9;
	for (int i=0; i<k; i++)
		ret=min(ret,ct['A'+i]);
	cout << ret*k << endl;
	return 0;
}
