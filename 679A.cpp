#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int p[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53};
	int ret=0;
	string verd;
	int n=sizeof(p)/sizeof(int);
	int ct=0;
	for (int i=0; i<n; i++) {
		int d=p[i];
		for (int j=0; j<2; j++) {
			if(d>100) break;
			cout << d << endl;
			cin>>verd;
			if(verd=="yes") ret++;
			d*=p[i];
		}
	}
	if(ret>1) {
		cout << "composite" << endl;
		return 0;
	}
	cout << "prime" << endl;
	return 0;
}
