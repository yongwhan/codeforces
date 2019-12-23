#include<bits/stdc++.h>
using namespace std;

string valid(string s) {
	if(s[0]!='0')
		return s;
	int cur=-1;
	for (int i=1; i<s.size(); i++) {
		if(s[i]!='0') {
			cur=i; break;
		}
	}
	if(cur==-1)
		return "0";
	swap(s[0],s[cur]);
	return s;
}

string get_min(string &s, string &t) {
	if(s.size()<t.size())
		return s;
	if(s.size()>t.size())
		return t;
	if(s<t)
		return s;
	return t;
}

string best(int i, int j, const vector<int> &c) {
	if(c[i]>c[j]) swap(i,j);
	if(c[i]==c[j]) return string(1,min(i,j)+'0')+string(c[i]+1,max(i,j)+'0');
	if(i<j) return string(c[i],i+'0')+string(1,j+'0')+string(1,i+'0');
	return string(1,j+'0')+string(c[i]+1,i+'0');
}
int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int t; cin>>t;
	while(t--) {
		vector<int> c(10);
		for (int i=0; i<10; i++)
			cin>>c[i];
		string ret;
		for (int i=0; i<10; i++)
			for (int j=0; j<10; j++) {
				if(i==j) continue;
				string cur=best(i,j,c);
				cur=valid(cur);
				if(ret.empty()) ret=cur;
				else ret=get_min(ret,cur);
			}
		for (int i=1; i<10; i++) {
			string cur=string(c[i]+1,'0'+i);
			ret=get_min(ret,cur);
		}
		cout<<ret<<"\n";
	}
	return 0;
}
