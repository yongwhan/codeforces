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
	ll n,k; cin>>n>>k;
	ll x=n, mul=pow(10,k);
	while(x%2==0 && mul%2==0) x/=2, mul/=2;
	while(x%5==0 && mul%5==0) x/=5, mul/=5;
	cout << n*mul << endl;
	return 0;
}
