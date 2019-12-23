#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	bool there=s[0]=='a';
	int n=s.size();
	for (int i=0; i<n; i++) {
		int swp=0;
		if(there) {
			if(i<n-1&&s[i]=='b'&&s[i+1]=='a')
				swp=1, there=false;
		} else {
			if(s[i]=='a') {
				swp=1, there=true;
				while(1) {
					if(i==n-1||s[i+1]=='b') break;
					i++;
					cout << 0 << " ";
				}
			}
		}
		cout << swp << " ";
	}
	cout << endl;
	return 0;
}
