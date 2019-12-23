#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int eval(string s, char ch) {
	int n=s.size();
	for (int i=0; i<n; i++)
		if(s[i]!=ch) s[i]=' ';
	stringstream ss(s);
	int ret=0;
	string t;
	while(ss>>t)
		if(t.size()%2==0)
			ret++;
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	int ret=0;
	for (char ch='A'; ch<='Z'; ch++)
		ret+=eval(s,ch);
	cout << ret << endl;
	return 0;
}
