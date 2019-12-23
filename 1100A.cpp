#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k; cin>>n>>k;
	vector<int> a(n);
	int e=0, s=0;
	for (int i=0; i<n; i++) {
		cin>>a[i];
		if(a[i]==1) e++;
		else s++;
	}
	int ret=0;
	for (int b=0; b<k; b++) {
		int x=e, y=s;
		for (int i=b; i<n; i+=k) {
			if(a[i]==1) x--;
			else y--;
		}
		ret=max(ret,abs(x-y));
	}
	cout << ret << endl;
	return 0;
}
