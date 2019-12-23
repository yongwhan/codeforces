#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,x,s=0,d=0; cin>>n;
	deque<int> dq;
	for (int i=0; i<n; i++)
		cin>>x, dq.push_back(x);
	for (int i=0; i<n; i++) {
		int cur=0;
		if(dq.front()>dq.back())
			cur=dq.front(), dq.pop_front();
		else
			cur=dq.back(), dq.pop_back();
		if(i%2) d+=cur;
		else s+=cur;
	}
	cout << s << " " << d << endl;
	return 0;
}
