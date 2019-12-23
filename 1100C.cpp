#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	double n,r; cin>>n>>r;
	double theta=2*acos(0)/n;
	cout << setprecision(10) << fixed << r * (sin(theta)/(1-sin(theta))) << endl;
	return 0;
}
