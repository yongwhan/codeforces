#include<bits/stdc++.h>
using namespace std;

int main() {
	int l,r; cin>>l>>r;
	for (int i=l; i<=r; i++) {
		string s=to_string(i);
		set<char> st(s.begin(),s.end());
		if(s.size()==st.size()) {
			cout<<s<<endl;
			return 0;
		}
	}
	cout<<-1<<endl;
	return 0;
}
