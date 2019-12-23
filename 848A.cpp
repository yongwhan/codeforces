#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int k; cin>>k;
	if(!k) {
		cout << "a" << endl;
		return 0;
	}
	for (char ch='a'; ch<='z'; ch++) {
		if(!k) break;
		int t;
		for (t=0; t*(t-1)<=k*2; t++);
		t--;
		k-=(t*(t-1)/2);
		for (int i=0; i<t; i++) cout << ch;
	}
	cout << endl;
	return 0;
}
