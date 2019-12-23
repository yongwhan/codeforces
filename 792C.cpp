#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

string trim(string s) {
	reverse(s.begin(), s.end());
	while(s.back()=='0')
		s.pop_back();
	if(s.empty())	
		return "0";
	reverse(s.begin(), s.end());
	return s;
}

string eval(string s, map<int,vector<int>> &mp, int m, int ct) {
	set<int> bad;
	while(ct--)
		bad.insert(mp[m][ct]);
	string ret;
	for (int i=0; i<s.size(); i++)
		if(bad.find(i)==bad.end())
			ret+=s[i];
	if(ret.empty())
		return "-1";
	return trim(ret);
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string n; cin>>n;
	map<int,vector<int>> ct;
	for (int i=n.size()-1; i>=0; i--) {
		int key=(n[i]-'0')%3;
		if(ct[key].size()>1)
			continue;
		ct[key].push_back(i);
	}
	int t=0;
	for (char ch : n)
		t=(t+(ch-'0'))%3;
	if(!t) {
		cout << n << endl;
		return 0;
	}

	for (int i=1; i<=2; i++) {
		if(t==i) {
			string u="-1", v="-1";
			if(ct[i].size()>=1)
				u=eval(n,ct,i,1);
			if(ct[3-i].size()>=2)
				v=eval(n,ct,3-i,2);
			if(u=="-1"&&v=="-1")
				cout << "-1" << endl;
			else if(u=="-1")
				cout << v << endl;
			else if(v=="-1")
				cout << u << endl;
			else {
				if(u.size()>v.size())
					cout << u << endl;
				else
					cout << v << endl;
			}
			return 0;
		}
	}
	return 0;
}
