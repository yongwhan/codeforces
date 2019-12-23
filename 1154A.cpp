#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	vector<int> x(4);
	for (int i=0; i<4; i++)
		cin>>x[i];
	sort(x.rbegin(), x.rend());
	for (int i=1; i<=3; i++)
		cout << x[0]-x[i] << " ";
	cout << endl;
	return 0;
}
