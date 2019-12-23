#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	vector<int> x(3);
	for (int i=0; i<3; i++)
		cin>>x[i];
	sort(x.begin(), x.end());
	cout << x[2]-x[0] << endl;
	return 0;
}
