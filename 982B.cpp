#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;

int main() {
	priority_queue<ii> pq1, pq2;
	int n,w; cin>>n;
	for (int i=0; i<n; i++)
		cin>>w,
		pq1.push({-w,i});
	n<<=1;
	for (int i=0; i<n; i++) {
		char ch; cin>>ch;
		ii cur;
		int ret;
		if(ch=='0')
			cur=pq1.top(),
			ret=cur.second,
			pq2.push({-cur.first, cur.second}),
			pq1.pop();
		else
			ret=pq2.top().second,
			pq2.pop();
		cout << ret+1 << " ";
	}
	cout << endl;
	return 0;
}
