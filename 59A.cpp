#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	int up=0;
	for (char ch : s)
		if(ch==toupper(ch))
			up++;
	if(2*up>s.size()) {
		for (char ch : s)
			cout << (char) toupper(ch);
	} else {
		for (char ch : s)
			cout << (char) tolower(ch);
	}
	cout << endl;
	return 0;
}
