#include<bits/stdc++.h>
using namespace std;

int n;
const int mx=1e5+77;
vector<int> a(mx,-1), win(mx,-1);
bool eval(int x) {
	if(win[x]!=-1)
		return win[x];
	int inc=a[x];
	bool ret=0;
	int lim=(n+inc-1)/inc;
	for (int i=-lim; i<=lim; i++) {
		int cur=i*inc+x;
		if(0<=cur&&cur<n&&a[cur]>inc) {
			ret|=!eval(cur);
		}
	}
	return win[x]=ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	cin>>n;
	for (int i=0; i<n; i++) cin>>a[i];
	for (int i=0; i<n; i++) win[i]=eval(i);
	for (int i=0; i<n; i++)
		if(win[i]) cout << 'A';
		else cout << 'B';
	cout << endl;
	return 0;
}
