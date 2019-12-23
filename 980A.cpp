#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	int x=0, y=0;
	for (auto ch : s)
		if(ch=='-') x++;
		else y++;
	if(!y||(x%y==0)) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
