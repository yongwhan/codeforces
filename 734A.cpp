#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	string s; cin>>s;
	int a=0, d=0;
	for (auto ch : s)
		if(ch=='A') a++;
		else d++;
	if(a>d) cout << "Anton" << endl;
	else if(a<d) cout << "Danik" << endl;
	else cout << "Friendship" << endl;
	return 0;
}
