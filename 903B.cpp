#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int poss(int h1, int a1, int h2, int a2) {
	int ret=0;
	while(1) {
		h2-=a1; ret++;
		if(h2<=0) return ret;
		h1-=a2;
		if(h1<=0) return -1;
	}
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int h1,a1,c1,h2,a2; cin>>h1>>a1>>c1>>h2>>a2;
	int x=0;
	while(1) {
		int y=poss(h1,a1,h2,a2);
		if(y!=-1) {
			cout << x+y << endl;
			for (int i=0; i<x; i++)
				cout << "HEAL" << endl;
			for (int i=0; i<y; i++)
				cout << "STRIKE" << endl;
			return 0;
		}
		h1+=c1-a2;
		x++;
	}
	return 0;
}
