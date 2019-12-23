#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int eval(int cur, multiset<int> st) {
	int ret=0;
	while(1) {
		auto it = st.lower_bound(cur);
		if(it==st.end())
			break;
		ret+=cur; st.erase(it); cur<<=1;
	}
	return ret;
}

int main() {
	int n,a; scanf("%d", &n);
	map<int,int> ct;
	for (int i=0; i<n; i++)
		scanf("%d", &a), ct[a]++;
	multiset<int> st;
	for (auto it : ct)
		st.insert(it.second);
	set<int> cand;
	for (auto it : st) {
		int x=it;
		while(x)
			cand.insert(x), x/=2;
	}

	int ret=0;
	for (auto i : cand)
		ret=max(ret,eval(i,st));
	printf("%d\n", ret);
	return 0;
}
