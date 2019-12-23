#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k; cin>>n>>k;
	string s, ret;
	for (int i=0; i<k; i++)
		s+='a'+i;
	for (int i=0; i<100; i++)
		ret+=s;
	cout << ret.substr(0,n) << endl;
	return 0;
}
