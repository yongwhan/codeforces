#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string line;
	getline(cin,line);
	getline(cin,line);
	int n=line.size(), ret=0;
	for (int i=0; i<=n-5; i++)
		if(line.substr(i,5)=="1 0 1")
			ret++, i+=4;
	cout << ret << endl;
	return 0;
}
