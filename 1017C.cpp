#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; cin>>n;
	for (int i=n; i>0; i-=int(sqrt(n)))
		for (int j=max(1,i-int(sqrt(n))+1); j<=i; j++)
			cout << j << " ";
	cout << endl;
	return 0;
}
