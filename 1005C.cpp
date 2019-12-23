#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n);
	map<int,int> ct;
	for (int i=0; i<n; i++)
		cin>>a[i],
		ct[a[i]]++;

	int ret=0;
	for (int i=0; i<n; i++) {
		bool ok=false;
		for (int j=0; j<32; j++) {
			int x=(1<<j)-a[i];
			if(ct[x]>1||(ct[x]==1&&x!=a[i]))
				ok=true;
		}
		if(!ok)
			ret++;
	}
	cout << ret << endl;
	return 0;
}
