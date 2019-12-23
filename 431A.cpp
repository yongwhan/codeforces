#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	vector<int> a(5);
	for (int i=1; i<=4; i++)
		cin>>a[i];
	string s; cin>>s;
	int ret=0;
	for (char ch : s)
		ret+=a[ch-'0'];
	cout << ret << endl;
	return 0;
}
