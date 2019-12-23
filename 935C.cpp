#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

double dist(double dx, double dy) {
	return sqrt(dx*dx+dy*dy);
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	double R, x1,y1, x2,y2;
	cin>>R>>x1>>y1>>x2>>y2;
	double dx=x1-x2, dy=y1-y2, norm=dist(dx,dy), r=(R+min(R,norm))/2;
	if(norm<1e-6) {
		cout << setprecision(16) << fixed << x1+R/2 << " " << y1 << " " << R/2 << endl;
		return 0;
	}
	cout << setprecision(16) << fixed << x1+(R-r)*dx/norm << " " << y1+(R-r)*dy/norm << " " << r << endl;
	return 0;
}
