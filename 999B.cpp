#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n; string s; cin>>s;
	for (int d=1; d<=n; d++) {
		if(n%d==0) {
			for (int i=0; i<d/2; i++)
				swap(s[i],s[d-1-i]);
		}
	}
	cout << s << endl;
	return 0;
}
