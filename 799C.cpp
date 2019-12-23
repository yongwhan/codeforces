#include<bits/stdc++.h>
using namespace std;

const int LOGSZ=17, N=1<<LOGSZ, inf=1e9;

void add(vector<int> &tree, int x, int v) {
  while(x <= N) {
    tree[x] = max(tree[x], v);
    x += (x & -x);
  }
}

int get(vector<int> &tree, int x) {
  int res = -inf;
  while(x) {
    res = max(res, tree[x]);
    x -= (x & -x);
  }
  return res;
}

int main() {
	int n,c,d; cin>>n>>c>>d;
	vector<int> C(N+1,-inf), D(N+1,-inf);
	int ret=0;
	for (int i=0; i<n; i++) {
		int b,p; char ch;
		cin>>b>>p>>ch;
		int cur;
		if(ch=='C') {
			if(p>c) continue;
			cur=max(get(C,c-p), get(D,d));
			add(C,p,b);
		} else {
			if(p>d) continue;
			cur=max(get(C,c), get(D,d-p));
			add(D,p,b);
		}
		ret=max(ret,cur+b);
	}
	cout << ret << endl;
	return 0;
}
