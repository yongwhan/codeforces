#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,d; cin>>n>>d;
	vector<int> x(n);
	for (int i=0; i<n; i++) cin>>x[i];
	int ret=1e9;
	for (int i=1; i<=100; i++) for (int j=i; j<=100; j++) {
		int cur=0;
		for (int k=0; k<n; k++)
			if(x[k]<i||x[k]>j) cur++;
		if(j-i<=d) ret=min(ret,cur);
	}
	cout << ret << endl;
	return 0;
}
