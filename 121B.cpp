#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

string u="477", v="447";

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k; cin>>n>>k;
	string s; cin>>s;
	int lim=n;
	for (int i=0; i<n; i++) {
		string t=s.substr(i,3);
		if(i%2==0&&(t==u||t==v)) {
			lim=i;
			break;
		}
	}

	for (int i=0; i<lim; i++) {
		if(!k) {
			cout << s << endl;
			return 0;
		}
		if(s.substr(i,2)=="47") {
			if(i%2==0) s.replace(i,2,"44");
			else s.replace(i,2,"77");
			k--;
		}
	}

	if(lim==n) {
		cout << s << endl;
		return 0;
	}

	if(k%2) {
		if(s.substr(lim,3)==u) s.replace(lim,3,v);
		else s.replace(lim,3,u);
	}
	cout << s << endl;
	return 0;
}
