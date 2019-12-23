#include <iostream>
using namespace std;

#define LOGSZ 20

typedef long long ll;

ll tree[(1<<LOGSZ)+1];
int N = (1<<LOGSZ);

// add v to value at x
void set(int x, int v) {
  while(x <= N) {
    tree[x] += v;
    x += (x & -x);
  }
}

// get cumulative sum up to and including x
int get(int x) {
  ll res = 0;
  while(x) {
    res += tree[x];
    x -= (x & -x);
  }
  return res;
}

int main() {
	int n,k,cur=1,nxt; cin>>n>>k;
	k=min(k,n-k);
	ll ret=1;
	for (int i=0; i<n; i++) {
		nxt=cur+k;
		if(nxt>n) nxt-=n;
		set(cur,1); set(nxt,1);
		ret+=get(nxt-1)-get(cur)+1;
		if(cur>=nxt) ret+=get(n);
		cout << ret << " ";
		cur=nxt;
	}
	cout << endl;
	return 0;
}
