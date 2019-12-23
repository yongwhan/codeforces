#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; cin>>n>>m;
	string s; cin>>s;
	while(m--) {
		int l,r; char c1,c2; cin>>l>>r>>c1>>c2;
		for (int i=l-1; i<=r-1; i++)
			if(s[i]==c1)
				s[i]=c2;
	}
	cout << s << endl;
	return 0;
}
