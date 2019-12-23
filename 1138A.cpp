#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> t(n);
	for (int i=0; i<n; i++)
		cin>>t[i];
	int tuna=0, eel=0, ret=0;
	for (int i=0; i<n; i++) {
		if(!i||t[i]==t[i-1]) {
			if(t[i]==1) tuna++;
			else eel++;
		} else {
			if(t[i]==1) tuna=1;
			else eel=1;
		}
		ret=max(ret,min(tuna,eel)*2);
	}
	cout << ret << endl;
	return 0;
}
