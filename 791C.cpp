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

string s[105];

int main() {
	int n,k; cin>>n>>k;
	for (int i=1; i<=n; i++) {
		s[i]="Aa";
		s[i][0]+=i/26;
		s[i][1]+=i%26;
	}

	for (int i=1; i<=n-k+1; i++) {
		string x; cin>>x;
		if(x=="NO") s[i+k-1]=s[i];
	}

	for (int i=1; i<=n; i++) cout << s[i] << " ";
	cout << endl;
	return 0;
}
