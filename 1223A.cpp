#include<bits/stdc++.h>
using namespace std;

int main() {
	int q,n; cin>>q;
	while(q--)
		cin>>n, cout<<(n==2?n:n%2)<<endl;
	return 0;
}
