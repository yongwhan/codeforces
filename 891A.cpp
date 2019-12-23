#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int gcd(int a, int b) {
	if(!b) return a;
	else return gcd(b,a%b);
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n);
	int one=0;
	for (int i=0; i<n; i++) {
		cin>>a[i];
		if(a[i]==1) one++;
	}
	if(one) {
		cout << n-one << endl;
		return 0;
	}

	int best=-1;
	for (int i=0; i<n; i++) {
		int cur=a[i];
		for (int j=i; j<n; j++) {
			cur=gcd(cur,a[j]);
			if(cur==1) {
				int val=j-i;
				if(best==-1) best=val;
				else best=min(best,val);
			}
		}
	}
	if(best!=-1) {
		cout << (n-1)+best << endl;
		return 0;
	}
	cout << -1 << endl;
	return 0;
}
