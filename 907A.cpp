#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mx=205;

bool climb(int b, int a) {
	return a<=b;
}

bool like(int b, int a) {
	return climb(b,a)&&(2*a>=b);
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int a,b,c,d; cin>>a>>b>>c>>d;
	for (int i=0; i<mx; i++)
	for (int j=0; j<mx; j++)
	for (int k=0; k<mx; k++)
	if(i>j&&j>k) {
		if(climb(i,a)&&like(i,a) && climb(j,b)&&like(j,b) && climb(k,c)&&like(k,c)) {
			if(climb(i,d)&&climb(j,d)&&climb(k,d)&&!like(i,d)&&!like(j,d)&&like(k,d)) {
				cout << i << endl << j << endl << k << endl;
				return 0;
			}
		}
	}
	cout << -1 << endl;
	return 0;
}
