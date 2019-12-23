#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k; string s; cin>>n>>k>>s;
	set<char> st(s.begin(), s.end());
	map<char,char> next;
	string t(st.begin(), st.end());
	for (int i=0; i<t.size()-1; i++)
		next[t[i]]=t[i+1];
	int first=t.front(), last=t.back();
	if(n<k) {
		cout << s + string(k-n, first) << endl;
		return 0;
	}

	for (int i=min(k,n)-1; i>=0; i--) {
		if(s[i]!=last) {
			s[i]=next[s[i]];
			s=s.substr(0,i+1);
			break;
		}
	}
	cout << s + string(max(0,k-(int) s.size()), first) << endl;
	return 0;
}
