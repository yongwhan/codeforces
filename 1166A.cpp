#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; cin>>n;
	map<char,int> ct;
	string s;
	while(n--)
		cin>>s, ct[s.front()]++;
	int ret=0,x,y;
	for (auto it : ct)
		x=it.second/2, y=it.second-x, ret+=x*(x-1)/2+y*(y-1)/2;
	cout<<ret<<endl;
	return 0;
}
