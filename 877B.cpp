#include<cstdio>
#include<iomanip>
#include<cmath>
#include<algorithm>
#include<sstream>
#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<map>
#include<string>
#include<iostream>
using namespace std;

typedef long long ll;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	s="#"+s+"#";
	int n=s.size();
	vector<int> apre(n,0), asuf(n,0), bpre(n,0), bsuf(n,0);
	for (int i=1; i<n; i++)
		apre[i]=apre[i-1]+int(s[i]=='a'),
		bpre[i]=bpre[i-1]+int(s[i]=='b');

	for (int i=n-2; i>=0; i--)
		asuf[i]=asuf[i+1]+int(s[i]=='a');

	int ret=0;
	for (int i=1; i<n; i++)
		for (int j=i; j<n; j++)
			ret=max(ret, apre[i-1]+max(0, bpre[j-1]-bpre[i-1])+asuf[j]);
	cout << ret << endl;
	return 0;
}
