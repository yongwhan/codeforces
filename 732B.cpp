#include<vector>
#include<iostream>
using namespace std;

int main() {
	int n,k; cin>>n>>k;
	int ret=0;
	vector<int> a(n);
	for (int i=0; i<n; i++) cin>>a[i];
	for (int i=1; i<n; i++)
		while(a[i]+a[i-1]<k) ret++, a[i]++;
	cout << ret << endl;
	for (int i=0; i<n; i++) {
		if(i) cout << " ";
		cout << a[i];
	}
	cout << endl;
	return 0;
}
