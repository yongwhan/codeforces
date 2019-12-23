#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m,x,y; cin>>n>>m;
	set<int> st;
	while(n--) {
		cin>>x;
		for (int i=0; i<x; i++)
			cin>>y, st.insert(y);
	}
	cout << (st.size()==m ? "YES" : "NO") << endl;
	return 0;
}
