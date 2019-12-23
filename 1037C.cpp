#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	string s,t; cin>>s>>t;
	int ret=0;
	for (int i=0; i<n-1; i++) {
		string a=s.substr(i,2), b=t.substr(i,2);
		if((a=="10"&&b=="01")||(a=="01"&&b=="10")) t[i]=a[0], t[i+1]=a[1], ret++;
	}
	for (int i=0; i<n; i++)
		if(s[i]!=t[i])
			ret++;
	cout << ret << endl;
	return 0;
}
