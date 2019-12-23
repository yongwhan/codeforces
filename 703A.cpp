#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,M=0,C=0; cin>>n;
	for (int i=0; i<n; i++) {
		int m,c; cin>>m>>c;
		if(m>c) M++;
		else if(m<c) C++;
	}
	if(M>C) cout << "Mishka" << endl;
	else if(M<C) cout << "Chris" << endl;
	else cout << "Friendship is magic!^^" << endl;
	return 0;
}
