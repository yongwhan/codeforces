#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mx=1e6+77;

bool ist(int n) {
	for (int i=0; i<25; i++)
		if(n==(1<<i)) return true;
	return false;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	vector<bool> flag(mx,true);
	flag[0]=flag[1]=false;
	for (int i=2; i*i<mx; i++)
		if(flag[i])
			for (int j=i; j*i<mx; j++)
				flag[i*j]=false;
	vector<int> p;
	for (int i=0; i<mx; i++)
		if(flag[i])
			p.push_back(i);
	int n; cin>>n;
	if(n==1) { cout << 1 << " " << 0 << endl; return 0; }
	set<int> e;
	int mx=0, ret=1;
	for (auto d : p) {
		if(n%d==0) {
			ret*=d;
			int cur=0;
			while(n%d==0)
				cur++, n/=d;
			mx=max(mx,cur);
			e.insert(cur);
		}
	}
	int ct=0;
	if(e.size()!=1||!ist(mx)) ct++;
	for (int i=0; i<25; i++)
		if(mx<=(1<<i)) {
			ct+=i;
			break;
		}
	cout << ret << " " << ct << endl;
	return 0;
}
