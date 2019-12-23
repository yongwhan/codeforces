#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	int a=0, b=0, x;
	for (int i=0; i<n; i++) {
		cin>>x;
		if(x==1) a++;
		else b++;
	}

	int cur=min(a,b), ret=cur;
	a-=cur; b-=cur;
	ret+=a/3;
	cout << ret << endl;
	return 0;
}
