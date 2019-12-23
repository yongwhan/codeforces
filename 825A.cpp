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
	int n; cin>>n;
	string s, ret; cin>>s; s+="0";
	char cur='0';
	for (int i=0; i<n+1; i++)
		if(s[i]=='1') cur++;
		else ret+=cur, cur='0';
	cout << ret << endl;
	return 0;
}
