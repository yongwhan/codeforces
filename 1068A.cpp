#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	ll N,M,K,L; cin>>N>>M>>K>>L;
	ll ret=(K+L+M-1)/M;
	cout << (ret*M>N ? -1 : ret) << endl;
	return 0;
}
