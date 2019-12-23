#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k,a; cin>>n>>k;
	queue<int> q;
	for (int i=0; i<n; i++) q.push(i+1);
	for (int i=0; i<k; i++) {
		cin>>a;
		int l=a%(q.size());
		for (int j=0; j<l; j++) q.push(q.front()), q.pop();
		cout << q.front() << " ";
		q.pop();
	}
	cout << endl;
	return 0;
}
