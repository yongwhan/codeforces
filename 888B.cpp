#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<map>
#include<string>
#include<iostream>
using namespace std;

int main() {
	int n; cin>>n;
	string s; cin>>s;
	map<char,int> mp;
	for (int i=0; i<n; i++) mp[s[i]]++;
	cout << (min(mp['L'],mp['R'])+min(mp['U'],mp['D']))*2 << endl;
	return 0;
}
