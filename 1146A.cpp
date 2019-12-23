#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int a=0, b=0;
	string s; cin>>s;
	for (auto ch : s)
		if(ch=='a') a++;
		else b++;
	cout << a+min(a-1,b) << endl;
	return 0;
}
