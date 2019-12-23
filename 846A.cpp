#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> v(n);
	for (int i=0; i<n; i++)
		cin>>v[i];
	int ret=0, zero=0;
	for (int i=0; i<n; i++) {
		if(!v[i]) zero++;
		int one=0;
		for (int j=i; j<n; j++)
			if(v[j]) one++;
		ret=max(ret,zero+one);
	}
	cout << ret << endl;
	return 0;
}
