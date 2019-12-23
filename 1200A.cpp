#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n; char ch;
	string ret(10,'0');
	for (int i=0; i<n; i++) {
		cin>>ch;
		if(ch=='L') {
			for (int j=0; j<10; j++)
				if(ret[j]=='0') { ret[j]++; break; }
		} else if(ch=='R') {
			for (int j=0; j<10; j++)
				if(ret[9-j]=='0') { ret[9-j]++; break; }
		} else ret[ch-'0']--;
	}
	cout<<ret<<endl;
	return 0;
}
