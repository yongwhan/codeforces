#include<bits/stdc++.h>
using namespace std;

typedef vector<string> grid;

int eval(grid &g) {
	int n=g.size();
	int x=0, y=0;
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			char cur='0'+(i+j)%2;
			if(cur==g[i][j]) x++;
			else y++;
		}
	}
	return min(x,y);
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<grid> p(4);
	for (int k=0; k<4; k++) {
		grid cur(n);
		for (int i=0; i<n; i++)
			cin>>cur[i];
		p[k]=cur;
	}
	sort(p.begin(),p.end());

	int ret=1e9;
	do {
		grid cur(2*n);
		for (int i=0; i<2*n; i++)
			cur[i]=string(2*n,'1');
		for (int i=0; i<2; i++) for (int j=0; j<2; j++) {
			int k=i*2+j;
			grid tmp=p[k];
			for (int ii=0; ii<n; ii++) for (int jj=0; jj<n; jj++)
				cur[n*i+ii][n*j+jj]=tmp[ii][jj];
		}
		ret=min(ret, eval(cur));
	} while(next_permutation(p.begin(), p.end()));
	cout << ret << endl;
	return 0;
}
