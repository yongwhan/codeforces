#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int lst[]={100, 20, 10, 5, 1};

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,ret=0; cin>>n;
	for (int i=0; i<5; i++)
		ret+=n/lst[i], n%=lst[i];
	cout << ret << endl;
	return 0;
}
