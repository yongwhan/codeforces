#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i];
	set<int> st(a.begin(),a.end()), cur;
	int sz=st.size();
	for (int i=n-1; i>=0; i--) {
		int x=a[i];
		if(cur.find(x)==cur.end()) {
			if(cur.size()==sz-1) {
				cout << x << endl;
				return 0;
			}
		}
		cur.insert(x);
	}
	return 0;
}
