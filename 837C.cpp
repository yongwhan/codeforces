#include<bits/stdc++.h>
using namespace std;

bool ok(int x, int y, int a, int b) {
	if(x>y) swap(x,y);
	if(a>b) swap(a,b);
	return x<=a&&y<=b;
}

int eval(int x1, int y1, int x2, int y2, int a, int b) {
	for (int i=0; i<2; i++) {
		for (int j=0; j<2; j++) {
			for (int k=0; k<2; k++) {
				if(ok(x1+x2,max(y1,y2),a,b))
					return x1*y1+x2*y2;
				swap(x1,y1); swap(x2,y2);
			}
			swap(x2,y2);
		}
		swap(x1,y1);
	}
	return 0;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,a,b; cin>>n>>a>>b;
	vector<int> x(n), y(n);
	for (int i=0; i<n; i++)
		cin>>x[i]>>y[i];
	int ret=0;
	for (int i=0; i<n; i++) for (int j=i+1; j<n; j++)
		ret=max(ret,eval(x[i],y[i],x[j],y[j],a,b));
	cout << ret << endl;
	return 0;
}
