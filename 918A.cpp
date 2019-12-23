#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	string ret(n,'o');
	int a=0, b=1, c=1;
	while(a<=n) {
		if(a) ret[a-1]='O';
		a=b, b=c, c=a+b;
	}
	cout << ret << endl;
	return 0;
}
