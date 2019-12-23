#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	int x=n%10;
	if(x<=5) n-=x;
	else n+=10-x;
	cout << n << endl;
	return 0;
}
