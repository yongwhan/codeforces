#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int gcd(int a, int b) {
	if(!b) return a;
	return gcd(b,a%b);
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	map<int,ii> value;
	map<ii,int> ct;
	for (int i=0; i<n; i++) {
		char ch; int a,b,c;
		cin>>ch>>a>>ch>>b>>ch>>ch>>c;
		int x=a+b, y=c;
		int g=gcd(x,y);
		x/=g; y/=g;
		ii f={x,y};
		value[i]=f;
		ct[f]++;
	}
	for (auto it : value)
		cout << ct[it.second] << " ";
	cout << endl;
	return 0;
}
