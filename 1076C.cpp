#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

void eval(int d) {
	int D = d*d-4*d;
	if(D<0) cout << "N" << endl;
	else {
		cout << "Y ";
		double x=sqrt(double(D));
		cout << setprecision(9) << fixed << (d+x)/2 << " " << (d-x)/2 << endl;
	}
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t,d; cin>>t;
	while(t--)
		cin>>d, eval(d);
	return 0;
}
