#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,x; cin>>n;
	multiset<int> mst;
	for (int i=0; i<n; i++)
		cin>>x, mst.insert(x);
	while(!mst.empty()) {
		int cur=*mst.rbegin();
		cout << cur << " ";
		for (int d=1; d<=cur; d++)
			if(cur%d==0)
				mst.erase(mst.find(d));
	}
	cout << endl;
	return 0;
}
