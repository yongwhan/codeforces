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
	int n=s.size(), ret=n;
	for (char ch='a'; ch<='z'; ch++) {
		int cur=0, x=0;
		for (int i=0; i<n; i++) {
			if(s[i]==ch) {
				int y=i+1;
				cur=max(cur,y-x);
				x=y;
			}
		}
		cur=max(cur,n+1-x);
		ret=min(ret,cur);
	}
	cout << ret << endl;
	return 0;
}
