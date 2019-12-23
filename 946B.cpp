#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll a,b; cin>>a>>b;
	while(1) {
		bool up=false;
		if(!a||!b) break;
		else if(a>=2*b) a%=(2*b), up=true;
		else if(b>=2*a) b%=(2*a), up=true;
		if(!up) break;
	}
	cout << a << " " << b << endl;
	return 0;
}
