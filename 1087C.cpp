#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int med(vector<int> v) {
	sort(v.begin(), v.end());
	return v[1];
}

int sign(int x) {
	if (x==0) return 1;
	return x/abs(x);
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	vector<int> x(3), y(3);
	for (int i=0; i<3; i++)
		cin>>x[i]>>y[i];
	int xm=med(x), ym=med(y);
	set<ii> ret;
	for (int i=0; i<3; i++) {
		int xcur=x[i], ycur=y[i];
		int xsgn=sign(xm-xcur), ysgn=sign(ym-ycur);
		for (int i=0; i<=abs(xm-xcur); i++)
			ret.insert({xcur+xsgn*i, ycur});
		for (int j=0; j<=abs(ym-ycur); j++)
			ret.insert({xm, ycur+ysgn*j});
	}
	cout << ret.size() << endl;
	for (auto it : ret)
		cout << it.first << " " << it.second << endl;
	return 0;
}
