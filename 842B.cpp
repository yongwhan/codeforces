#include<cmath>
#include<queue>
#include<stack>
#include<set>
#include<vector>
#include<map>
#include<string>
#include<iostream>
using namespace std;

int main() {
	double r,d; cin>>r>>d;
	int n; cin>>n;
	int ret=0;
	for (int i=0; i<n; i++) {
		double xi,yi,ri; cin>>xi>>yi>>ri;
		double dist=sqrt(xi*xi+yi*yi);
		if(dist+ri<r+1e-6 && dist-ri+1e-6>r-d) ret++;
	}
	cout << ret << endl;
	return 0;
}
