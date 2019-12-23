#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m,a; cin>>n>>m;
	string ret;
	map<int,int> ct;
	for (int i=0; i<m; i++) {
		cin>>a; ct[a]++;
		if(ct.size()==n) {
			ret+='1';
			for (int i=1; i<=n; i++) {
				ct[i]--;
				if(ct[i]==0)
					ct.erase(i);
			}
		}
		else ret+='0';
	}
	cout << ret << endl;
	return 0;
}
