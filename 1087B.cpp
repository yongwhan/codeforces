#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k; cin>>n>>k;
	set<int> st;
	for (int d=1; d*d<=n; d++) {
		if(n%d==0) {
			int e=n/d;
			for (int i=0; i<2; i++) {
				if(e<k)
					st.insert(k*d+e);
				swap(d,e);
			}
		}
	}
	cout << *st.begin() << endl;
	return 0;
}
