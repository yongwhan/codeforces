#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> x1(n), y1(n), x2(n), y2(n);
	multiset<int> xmin, xmax, ymin, ymax;
	for (int i=0; i<n; i++) {
		cin>>x1[i]>>y1[i]>>x2[i]>>y2[i];
		xmin.insert(x2[i]);
		xmax.insert(x1[i]);
		ymin.insert(y2[i]);
		ymax.insert(y1[i]);
	}

	for (int i=0; i<n; i++) {
		xmin.erase(xmin.find(x2[i]));
		xmax.erase(xmax.find(x1[i]));
		ymin.erase(ymin.find(y2[i]));
		ymax.erase(ymax.find(y1[i]));
		int x_min=*xmax.rbegin(), x_max=*xmin.begin();
		int y_min=*ymax.rbegin(), y_max=*ymin.begin();
		if(x_min<=x_max && y_min<=y_max) {
			cout << (x_min+x_max)/2 << " " << (y_min+y_max)/2 << endl;
			return 0;
		}
		xmin.insert(x2[i]);
		xmax.insert(x1[i]);
		ymin.insert(y2[i]);
		ymax.insert(y1[i]);
	}
	return 0;
}
