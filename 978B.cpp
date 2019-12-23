#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	string s; cin>>s; s+='t'; n++;
	int ret=0, l=1;
	for (int i=1; i<n; i++) {
		if(s[i]==s[i-1])
			l++;
		else {
			if(s[i-1]=='x')
				ret+=max(l-2,0);
			l=1;
		}
	}
	cout << ret << endl;
	return 0;
}
