#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll ret=0;
	int n, zero=0, x, neg=0; cin>>n;
	for (int i=0; i<n; i++) {
		cin>>x;
		if(x>0) ret+=abs(x-1);
		else if(x<0) ret+=abs(x+1), neg++;
		else zero++;
	}
	if((neg%2)&&!zero) ret+=2;
	else ret+=zero;
	cout<<ret<<endl;
	return 0;
}
