#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,ret=0; cin>>n; n<<=1;
	vector<int> a(n);
	for (int i=0; i<n; i++) cin>>a[i];
	while(!a.empty()) {
		int t=-1;
		for (int j=1; j<n; j++)
			if(a[0]==a[j]) {
				t=j;
				break;
			}
		for (int j=t; j>1; j--)
			swap(a[j],a[j-1]),
			ret++;
		a.erase(a.begin());
		a.erase(a.begin());
	}
	cout << ret << endl;
	return 0;
}
