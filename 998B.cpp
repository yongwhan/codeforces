#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,B; cin>>n>>B;
	int diff=0;
	vector<int> a(n), cost;
	for (int i=0; i<n-1; i++) {
		cin>>a[i];
	}

	for (int i=0; i<n-1; i++) {
		if(a[i]%2) diff++;
		else diff--;
		if(!diff) cost.push_back(abs(a[i+1]-a[i]));
	}

	sort(cost.begin(),cost.end());
	int ret=0, sum=0;
	for (int x : cost) {
		sum+=x;
		if(sum>B) break;
		ret++;
	}
	cout << ret << endl;
	return 0;
}
