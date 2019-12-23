#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	string a="aeiou", b="02468";
	set<char> x(a.begin(), a.end()), y(b.begin(),b.end());
	int ret=0;
	for (char ch : s)
		if(isalpha(ch)) {
			if(x.find(ch)!=x.end())
				ret++;
		} else {
			if(y.find(ch)==y.end())
				ret++;
		}
	cout << ret << endl;
	return 0;
}
