#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int h;
const int mx=2e5+5;
vector<int> a(mx);

void eval1() {
	cout << 0;
	int x=1, y=1;
	for (int i=1; i<=h; i++) {
		for (int j=0; j<a[i]; j++) {
			cout << " " << x;
			y++;
		}
		x=y;
	}
	cout << endl;
}

void eval2() {
	cout << 0;
	int x=1, y=1, z=1;
	for (int i=1; i<=h; i++) {
		int p=a[i]/2, q=a[i]-p;
		vector<int> cand;
		if(p) {
			for (int j=0; j<p; j++) {
				cout << " " << x;
				z++;
				cand.push_back(z);
			}
			x=cand[0];
		}
		if(q) {
			cand.clear();
			for (int j=0; j<q; j++) {
				cout << " " << y;
				z++;
				cand.push_back(z);
			}
			if(p==0) x=cand[0];
			y=cand[0];
		}
	}
	cout << endl;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	cin>>h;
	for (int i=0; i<=h; i++)
		cin>>a[i];

	int vio=-1;
	for (int i=0; i<h; i++)
		if(a[i]>1&&a[i+1]>1) {
			vio=i;
			break;
		}

	if(vio==-1) { cout << "perfect" << endl; return 0; }
	cout << "ambiguous" << endl;
	eval1();
	eval2();
	return 0;
}
