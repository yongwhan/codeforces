#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &a) {
	for (int x : a)
		cout << x << " ";
	cout << endl;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n);
	bool o=false, e=false;
	for (int i=0; i<n; i++) {
		cin>>a[i];
		if(a[i]%2) o=true;
		else e=true;
	}
	if(!o||!e) print(a);
	else {
		sort(a.begin(),a.end());
		print(a);
	}
	return 0;
}
