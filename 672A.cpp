#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

string n2s(int x) {
	stringstream ss; ss<<x; return ss.str();
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	string s;
	for (int i=1; i<=1000; i++)
		s+=n2s(i);
	cout << s[n-1] << endl;
	return 0;
}
