#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int q; cin>>q;
	int left=0, right=0;
	map<int,int> idx;
	while(q--) {
		char ch; int id;
		cin>>ch>>id;
		if(ch=='L') idx[id]=--left;
		else if(ch=='R') idx[id]=++right;
		else {
			int cur=idx[id];
			if(cur<0) cout << min(cur-left, right+abs(cur)-1) << endl;
			else cout << min(right-cur, abs(left)+cur-1) << endl;
		}
	}
	return 0;
}
