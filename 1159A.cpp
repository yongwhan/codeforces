#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,cur=0,mn=0; cin>>n;
	char ch;
	while(n--) {
		cin>>ch;
		if(ch=='+') cur++;
		else cur--;
		mn=min(mn,cur);
	}
	cout << cur-mn << endl;
	return 0;
}
