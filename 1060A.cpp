#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,ct=0; char ch;
	cin>>n;
	for (int i=0; i<n; i++) {
		cin>>ch;
		if(ch=='8') ct++;
	}
	cout << min(ct,n/11) << endl;
	return 0;
}
