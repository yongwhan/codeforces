#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define LOGSZ 20
int tree[(1<<LOGSZ)+1], tree2[(1<<LOGSZ)+1], N = (1<<LOGSZ);

// add v to value at x
void add(int x, int v) {
  while(x <= N) {
    tree[x] += v;
    x += (x & -x);
  }
}

void add2(int x, int v) {
  while(x <= N) {
    tree2[x] += v;
    x += (x & -x);
  }
}

// get cumulative sum up to and including x
ll get(int x) {
  ll res = 0;
  while(x) {
    res += tree[x];
    x -= (x & -x);
  }
  return res;
}

ll get2(int x) {
  ll res = 0;
  while(x) {
    res += tree2[x];
    x -= (x & -x);
  }
  return res;
}

int main() {
	int n,a; cin>>n;
	map<int,int> mp;
	ll ret=0;
	for (int i=1; i<=n; i++) cin>>a, mp[a]=i;
	map<int,ll> left,right;
	for (auto it : mp) right[it.first]=get(n)-get(it.second), add(it.second,1);
	for (auto rit=mp.rbegin(); rit!=mp.rend(); rit++) left[rit->first]=get2(rit->second), add2(rit->second,1);
	for (auto it : mp) ret+=left[it.first]*right[it.first];
	cout << ret << endl;
	return 0;
}
