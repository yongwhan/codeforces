#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	map<int,int> ct;
	int x;
	for (int i=0; i<3; i++)
		cin>>x, ct[x]++;
	bool ok=false;
	for (int i=1; i<=3; i++)
		if(ct[i]>=i)
			ok=true;
	if(ok||(ct[2]==1&&ct[4]==2)) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
