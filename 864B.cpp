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
	int n; string s; cin>>n>>s;
	for (int i=0; i<n; i++)
		if(s[i]==toupper(s[i])) s[i]=' ';
	stringstream ss(s);
	int ret=0; string cur;
	while(ss>>cur) {
		set<char> st(cur.begin(), cur.end());
		ret=max(ret,(int)st.size());
	}
	cout << ret << endl;
	return 0;
}
