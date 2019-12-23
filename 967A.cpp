#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int eval(vector<int> &v, int s) {
	sort(v.begin(), v.end());
	int n=v.size(), ret=0;
	for (int i=0; i<n-1; i++)
		if(v[i+1]-v[i]<=s)
			ret++;
	return ret;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,s,h,m; cin>>n>>s;
	vector<int> v(n);
	for (int i=0; i<n; i++)
		cin>>h>>m,
		v[i]=h*60+m;
	int ct=eval(v,s);
	for (int i=0; i<24*60+77; i++) {
		vector<int> w=v; w.push_back(i);
		if(eval(w,s)==ct) {
			cout << i/60 << " " << i%60 << endl;
			return 0;
		}
	}
	return 0;
}
