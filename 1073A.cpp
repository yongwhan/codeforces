#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n; string s; cin>>s;
	for (int i=0; i<n; i++) {
		map<char,int> ct;
		string cur;
		int val=0;
		for (int j=i; j<n; j++) {
			char ch=s[j];
			cur+=ch;
			val=max(val,++ct[ch]);
			if(2*val<=(j-i+1)) {
				cout << "YES" << endl << cur << endl;
				return 0;
			}
		}
	}
	cout << "NO" << endl;
	return 0;
}
