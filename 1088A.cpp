#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int x; cin>>x;
	for (int a=1; a<=x; a++)
		for (int b=1; b<=x; b++)
			if((a*b>x)&&(a<b*x)&&(a%b==0)) {
				cout << a << " " << b << endl;
				return 0;
			}
	cout << -1 << endl;
	return 0;
}
