#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,total=0; cin>>n;
	vector<int> a(n);
	for (int i=0; i<n; i++) cin>>a[i], total+=a[i];
	int cur=0;
	for (int i=0; i<n; i++) {
		cur+=a[i];
		if(cur*2>=total) { cout << i+1 << endl; return 0; }
	}
	return 0;
}
