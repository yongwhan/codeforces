#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<map>
#include<string>
#include<iostream>
using namespace std;

int main() {
	string s="v<^>";
	map<char,int> mp;
	for (int i=0; i<4; i++) mp[s[i]]=i;

	char a,b; cin>>a>>b;
	int n; cin>>n; n%=4;
	int x=mp[a], y=mp[b];

	bool p=(x+n)%4==y, q=x==(y+n)%4;
	if(p&&q) cout << "undefined" << endl;
	else if(p) cout << "cw" << endl;
	else if(q) cout << "ccw" << endl;
	else cout << "undefined" << endl;
	return 0;
}
