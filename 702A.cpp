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
	int ret=1, cur=1;
	for (int i=1; i<n; i++) {
		if(a[i]>a[i-1]) cur++;
		else cur=1;
		ret=max(ret,cur);
	}
	cout << ret << endl;
	return 0;
}
