#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,x,ret=0,rec=0;
	cin>>n;
	for (int i=0; i<n; i++) {
		cin>>x;
		if(x==-1) {
			if(rec) rec--;
			else ret++;
		} else rec+=x;
	}
	cout << ret << endl;
	return 0;
}
