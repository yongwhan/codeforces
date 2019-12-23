#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<map>
#include<string>
#include<iostream>
using namespace std;

int main() {
	string s; cin>>s;
	int n=s.size(), idx=n, count=0;
	for (int i=n-1; i>=0; i--)
		if(s[i]=='1') idx=i;
	for (int i=idx; i<n; i++)
		if(s[i]=='0') count++;
	if(count>=6) cout << "yes" << endl;
	else cout << "no" << endl;
	return 0;
}
