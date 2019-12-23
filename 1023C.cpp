#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k; cin>>n>>k;
	string s; cin>>s;
	set<int> st;
	int ct=0, i=0;
	while(ct<k/2) {
		if(s[i]=='(')
			st.insert(i), ct++;
		i++;
	}
	i=n-1;
	ct=0;
	while(ct<k/2) {
		if(s[i]==')')
			st.insert(i), ct++;
		i--;
	}
	for (auto i : st)
		cout<<s[i];
	cout<<endl;
	return 0;
}
