#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

bool guarantee(int i, map<int,int> &ct, int k, int remain, int n, map<int,int> &idx) {
	int thres=ct[i]+1;
	priority_queue<int> pq;
	for (int j=1; j<=n; j++)
		if(j!=i)
			if(ct[j]!=ct[i]||(ct[j]==ct[i]&&idx[j]>idx[i]))
				pq.push(ct[j]);
	while(!pq.empty()) {
		int x=pq.top(); pq.pop();
		int cur=max(thres-x,0);
		if(cur>remain)
			break;
		remain-=cur; k--;
	}
	for (int j=1; j<=n; j++)
		if(j!=i)
			if(ct[j]==ct[i] && idx[j]<idx[i])
				k--;
	return k>0;
}

bool cannot(int i, map<int,int> &ct, int k, int remain) {
	int cur=ct[i]+remain;
	for (auto it=ct.begin(); it!=ct.end(); it++)
		if((*it).second>=cur)
			k--;
	return k<=0;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k,m,a,x; cin>>n>>k>>m>>a;
	map<int,int> ct, idx;
	for (int i=0; i<a; i++) {
		cin>>x;
		ct[x]++;
		idx[x]=i;
	}

	for (int i=1; i<=n; i++) {
		int ret=2;
		if(cannot(i,ct,k,m-a)) ret=3;
		if(ct[i]) {
			if(guarantee(i,ct,k,m-a,n,idx)) ret=1;
		} else {
			if(m-a==0) ret=3;
		}
		if(i>1) cout << " ";
		cout << ret;
	}
	cout << endl;
	return 0;
}
