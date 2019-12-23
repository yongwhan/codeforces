#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mod=1e9+7;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll ret=1;
	string s;
	char ch;
	while(cin>>ch) {
		if(ch=='a') s+=ch;
		else if(ch=='b') s+=' ';
	}

	stringstream ss(s);
	string tmp;
	while(ss>>tmp)
		ret=(ret*ll(tmp.size()+1))%mod;
	cout << ret-1 << endl;
	return 0;
}
