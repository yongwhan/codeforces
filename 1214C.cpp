#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,bal=0; cin>>n;
	string s; cin>>s;
	for (const char &ch:s) {
		if(ch=='(') bal++;
		else bal--;
		if(bal<-1) { cout<<"No"<<endl; return 0; }
	}
	cout<<(!bal?"Yes":"No")<<endl;
	return 0;
}
