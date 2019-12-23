#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<int> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i];
	sort(a.begin(), a.end());
	queue<int> q;
	stack<int> s;
	for (int i=0; i<n; i++)
		if(i%2) s.push(a[i]);
		else q.push(a[i]);
	while(!q.empty())
		cout << q.front() << " ", q.pop();
	while(!s.empty())
		cout << s.top() << " ", s.pop();
	cout << endl;
	return 0;
}
