#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int dist(int y, vector<int> &x) {
	int ret=2e9;
	for (auto t : x) ret=min(ret,abs(t-y));
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,d; cin>>n>>d;
	vector<int> x(n);
	for (int i=0; i<n; i++) cin>>x[i];
	sort(x.begin(), x.end());
	set<int> st;
	for (int i=0; i<n; i++) {
		for (int sgn=0; sgn<2; sgn++) {
			int y=x[i]+(sgn*2-1)*d;
			if(dist(y,x)==d) st.insert(y);
		}
	}
	cout << st.size() << endl;
	return 0;
}
