#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int gcd(int a, int b) {
	if(!b) return a;
	return gcd(b,a%b);
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,m; scanf("%d %d", &n, &m);
	if(m<n-1) {
		printf("Impossible\n");
		return 0;
	}
	vector<ii> ret;
	for (int i=1; i<=n; i++)
		for (int j=i+1; j<=n; j++) {
			if(gcd(i,j)==1)
				ret.push_back({i,j});
			if(ret.size()==m) {
				printf("Possible\n");
				for (auto it : ret)
					printf("%d %d\n", it.first, it.second);
				return 0;
			}
		}
	printf("Impossible");
	return 0;
}
