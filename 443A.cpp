#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	set<char> st;
	char ch;
	while(cin>>ch)
		if(isalpha(ch))
			st.insert(ch);
	cout << st.size() << endl;
	return 0;
}
