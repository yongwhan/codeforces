#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

void eval(int x, int n) {
	string ret;
	while(x)
		ret=char('0'+x%n)+ret, x/=n;
	cout << ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	for (int i=1; i<n; i++) {
		for (int j=1; j<n; j++) {
			if(j>1) cout << " ";
			eval(i*j,n);
		}
		cout << endl;
	}
	return 0;
}
