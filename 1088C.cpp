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
	cout << n+1 << endl;
	int sum=0;
	for (int i=n-1; i>=0; i--) {
		int add=(i-(a[i]+sum)%n+n)%n;
		cout << 1 << " " << i+1 << " " << add << endl;
		sum+=add;
	}
	cout << 2 << " " << n << " " << n << endl;
	return 0;
}
