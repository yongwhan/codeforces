#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,sum=0; cin>>n;
	vector<int> a(n);
	for (int i=0; i<n; i++) cin>>a[i], sum+=a[i];
	sort(a.begin(),a.end());
	int ret=0;
	for (int i=0; i<n; i++) {
		if(int(double(sum)/n + .5)==5) { cout << ret << endl; return 0; }
		ret++; sum+=5-a[i];
	}
	cout << n << endl;
	return 0;
}
