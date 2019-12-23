#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int d1,d2,d3; cin>>d1>>d2>>d3;
	cout << min({d1+d2+d3, 2*(d1+d2), 2*(d1+d3), 2*(d2+d3)}) << endl;
	return 0;
}
