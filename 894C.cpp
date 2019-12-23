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
	int m; cin>>m;
	vector<int> s(m);
	for (int i=0; i<m; i++) cin>>s[i];

	for (int i=0; i<m; i++) {
		if(s[i]%s[0]) {
			cout << -1 << endl; return 0;
		}
	}

	cout << 2*m << endl;
	for (int i=0; i<m; i++)
		cout << s[0] << " " << s[i] << " ";
	cout << endl;
	return 0;
}
