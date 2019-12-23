#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int ret=0;
	int w,h,k; cin>>w>>h>>k;
	for (int i=0; i<k; i++) {
		ret+=(w+h)*2-4;
		w-=4; h-=4;
	}
	cout << ret << endl;
	return 0;
}
