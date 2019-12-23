#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k; cin>>n>>k;
	string s; cin>>s;
	int overlap=0;
	for (int i=n-1; i>=1; i--) {
		if(s.substr(0,i)==s.substr(n-i,i)) {
			overlap=i;
			break;
		}
	}
	string t=s.substr(overlap);
	k--;
	while(k-->0)
		s+=t;
	cout << s << endl;
	return 0;
}
