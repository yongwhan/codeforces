#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,a; cin>>n;
	for (int i=0; i<n; i++) {
		cin>>a;
		if(a%2==0) a--;
		cout << a << " ";
	}
	cout << endl;
	return 0;
}
