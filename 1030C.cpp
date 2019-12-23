#include<bits/stdc++.h>
using namespace std;

bool ok(int target, vector<int> a) {
	if(a.empty()) return true;
	int n=a.size(), sum=0;
	bool ret=false;
	for (int i=0; i<n; i++) {
		sum+=a[i];
		if(sum==target) {
			vector<int> b;
			for (int j=i+1; j<n; j++) b.push_back(a[j]);
			ret|=ok(target,b);
		}
	}
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n);
	char ch;
	for (int i=0; i<n; i++)
		cin>>ch, a[i]=ch-'0';
	int sum=0;
	bool good=false;
	for (int i=0; i<n-1; i++) {
		sum+=a[i];
		vector<int> b;
		for (int j=i+1; j<n; j++) b.push_back(a[j]);
		if(ok(sum,b)) { good=true; break; }
	}
	cout << (good ? "YES" : "NO") << endl;
	return 0;
}
