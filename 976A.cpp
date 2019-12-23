#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	string s; cin>>s;
	int zero=0;
	for (char ch : s)
		if(ch=='0')
			zero++;
	cout << (s=="0" ? "0" : "1"+string(zero,'0')) << endl;
	return 0;
}
