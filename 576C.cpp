#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef pair<ii,int> iii;

vector<int> eval(map<int,vector<ii>> &mp) {
	vector<int> ret;
	bool asc=true;
	for (auto it=mp.begin(); it!=mp.end(); it++) {
		vector<ii> cur=(*it).second;
		if(asc) sort(cur.begin(), cur.end());
		else sort(cur.begin(), cur.end(), greater<ii>());
		for (ii x : cur)
			ret.push_back(x.second);
		asc=!asc;
	}
	return ret;
}

int main() {
	int n; scanf("%d", &n);
	map<int,vector<ii>> mpx;
	int x,y;
	for (int i=0; i<n; i++)
		scanf("%d %d", &x, &y),
		mpx[y/1200].push_back({x/1200,i});

	vector<int> ret=eval(mpx);
	for (int i=0; i<n; i++) {
		if(i) printf(" ");
		printf("%d", ret[i]+1);
	}
	printf("\n");
	return 0;
}
