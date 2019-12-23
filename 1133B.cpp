#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k,x; cin>>n>>k;
	map<int,int> ct;
	while(n--)
		cin>>x, ct[x%k]++;
	int ret=0;
	for (int i=0; i<k; i++) {
		int j=(k-i)%k;
		if(i>j)
			break;
		if(i==j) ret+=2*(ct[i]/2);
		else ret+=2*min(ct[i],ct[j]);
	}
	cout << ret << endl;
	return 0;
}
