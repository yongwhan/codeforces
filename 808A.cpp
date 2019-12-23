#include<cstdio>
#include<iomanip>
#include<cmath>
#include<algorithm>
#include<sstream>
#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<map>
#include<string>
#include<iostream>
using namespace std;

typedef long long ll;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n; cin>>n;
	for (ll i=0; i<10; i++) {
		for (ll j=1; j<=9; j++) {
			ll cur=j*pow(10L,i);
			if(cur>n) {
				cout << cur-n << endl;
				return 0;
			}
		}
	}
	return 0;
}
