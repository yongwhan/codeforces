#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

string eval(string &s) {
	string ret;
	for (char ch='a'; ch<='z'; ch++) {
		string t=s;
		for (int i=0; i<t.size(); i++)
			if(t[i]!=ch) t[i]=' ';
		stringstream ss(t);
		string cur;
		bool add=false;
		while(ss>>cur) {
			if(cur.size()%2)
				add=true;
		}
		if(add)
			ret+=ch;
	}
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		string s; cin>>s; cout<<eval(s)<<endl;
	}
	return 0;
}
