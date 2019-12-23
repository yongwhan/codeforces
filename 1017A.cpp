#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,a,b,c,d; cin>>n;
	vector<int> v(n);
	for (int i=0; i<n; i++) {
		cin>>a>>b>>c>>d;
		v[i]=a+b+c+d;
	}
	int ret=1;
	for (int i=0; i<n; i++)
		if(v[i]>v[0])
			ret++;
	cout << ret << endl;
	return 0;
}
