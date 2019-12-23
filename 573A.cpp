#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,a; cin>>n;
	set<int> st;
	for (int i=0; i<n; i++) {
		cin>>a;
		while(1) {
			if(a%2) break;
			a/=2;
		}
		while(1) {
			if(a%3) break;
			a/=3;
		}
		st.insert(a);
	}
	if(st.size()==1) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
