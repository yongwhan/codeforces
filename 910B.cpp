#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int eval(int n, vector<int> &v) {
	int ret=0, cur=0;
	for (auto it : v) {
		if(cur+it>n)
			cur=it, ret++;
		else
			cur+=it;
	}
	if(cur)
		ret++;
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,a,b; cin>>n>>a>>b;
	vector<int> v={a,a,a,a,b,b};
	sort(v.begin(), v.end());
	int ret=1e9;
	do {
		ret=min(ret,eval(n,v));
	} while(next_permutation(v.begin(), v.end()));
	cout << ret << endl;
	return 0;
}
