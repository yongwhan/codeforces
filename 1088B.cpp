#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k,x; cin>>n>>k;
	set<int> st;
	while(n--) cin>>x, st.insert(x);
	int cur=0;
	for (auto it : st) {
		if(!k) return 0;
		cout << it-cur << endl;
		cur=it;
		k--;
	}
	for (int i=0; i<k; i++)
		cout << 0 << endl;
	return 0;
}
