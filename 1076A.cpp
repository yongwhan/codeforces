#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	string s; cin>>s;
	for (int i=0; i<n-1; i++)
		if(s[i]>s[i+1]) {
			cout << s.substr(0,i)+s.substr(i+1) << endl;
			return 0;
		}
	cout << s.substr(0,n-1) << endl;
	return 0;
}
