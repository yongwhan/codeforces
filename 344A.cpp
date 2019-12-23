#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	string s,cur;
	for (int i=0; i<n; i++)
		cin>>cur, s+=cur[0];
	int ret=1;
	for (int i=1; i<n; i++)
		if(s[i]!=s[i-1])
			ret++;
	cout << ret << endl;
	return 0;
}
