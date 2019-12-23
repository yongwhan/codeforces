#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	char ch;
	while(cin>>ch)
		if(ch=='H'||ch=='Q'||ch=='9') {
			cout << "YES" << endl;
			return 0;
		}
	cout << "NO" << endl;
	return 0;
}
