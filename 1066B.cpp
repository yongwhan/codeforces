#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,r; cin>>n>>r;
	vector<int> a(n);
	for (int i=0; i<n; i++) cin>>a[i];
	set<int> cover;
	for (int i=0; i<n; i++) cover.insert(i);
	int ret=0;
	while(!cover.empty()) {
		auto it=*cover.begin();
		int cur=-1;
		for (int pos=min(it+r-1,n-1); pos>=max(0,it-(r-1)); pos--) {
			if(a[pos]) {
				cur=pos; break;
			}
		}
		if(cur==-1) { cout << -1 << endl; return 0; }
		ret++;
		for (int pos=min(cur+r-1,n-1); pos>=max(0,cur-(r-1)); pos--)
			cover.erase(pos);
	}
	cout << ret << endl;
	return 0;
}
