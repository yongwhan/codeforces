#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,m; cin>>n>>m;
	char ch;
	int xmin=1e9, ymin=1e9, xmax=-1, ymax=-1;
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++) {
			cin>>ch;
			if(ch=='B')
				xmin=min(xmin,i+1), ymin=min(ymin,j+1),
				xmax=max(xmax,i+1), ymax=max(ymax,j+1);
		}
	cout << (xmin+xmax)/2 << " " << (ymin+ymax)/2 << endl;
	return 0;
}
