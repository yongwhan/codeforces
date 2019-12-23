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
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll n,k; cin>>n>>k;
	ll x=n/2, y=n-x, a=x/(k+1), b=a*k;
	y+=(x-a-b);
	cout << a << " " << b << " " << y << endl;
	return 0;
}
