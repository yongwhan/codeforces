#include<bits/stdc++.h>
using namespace std;

/*
typedef long long ll;
typedef pair<int,int> ii;

void print(int x) {
	for (auto int i=25; i>=0; i--)
		cout << bool(x&(1<<i));
	cout << endl;
}
*/

bool ok(int x) {
	for (int i=0; i<=25; i++)
		if(x==((1<<i) - 1))
			return true;
	return false;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int x; cin>>x;
//	print(x);
	vector<int> a;
	int t;
	for (t=0; t<40; t+=2) {
		if(ok(x))
			break;
		int cur=-1;
		for (int i=20; i>=0; i--)
			if(!(x&(1<<i))) {
				cur=i+1;
				break;
			}
		if(cur==-1)
			break;
		a.push_back(cur);
		x^=((1<<cur) - 1);
//		print(x);
		if(ok(x)) {
			t++;
			break;
		}
		x++;
//		print(x);
	}
	cout << t << endl;
	if(t) {
		for (auto x : a)
			cout << x << " ";
		cout << endl;
	}
	return 0;
}
