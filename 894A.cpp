#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	int n=s.size(), ret=0;
	for (int i=0; i<n; i++)
		for (int j=i+1; j<n; j++)
			for (int k=j+1; k<n; k++)
				if(s[i]=='Q'&&s[j]=='A'&&s[k]=='Q')
					ret++;
	cout << ret << endl;
	return 0;
}
