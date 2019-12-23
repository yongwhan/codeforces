#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	map<int,int> fact;
	fact[0]=1;
	for (int i=1; i<15; i++)
		fact[i]=fact[i-1]*i;
	int a,b; cin>>a>>b;
	cout << fact[min(a,b)] << endl;
	return 0;
}
