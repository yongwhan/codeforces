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
	deque<int> dq;
	for (int i=0; i<n; i++)
		if(i%2) dq.push_back(a[i]);
		else dq.push_front(a[i]);
	vector<int> b(n);
	for (int i=0; i<n; i++)
		b[i]=dq.front(), dq.pop_front();
	for (int i=0; i<n; i++)
		if(b[(i+n-1)%n]+b[(i+1)%n]<=b[i]) {
			cout << "NO" << endl;
			return 0;
		}
	cout << "YES" << endl;
	for (auto x : b)
		cout << x << " ";
	cout << endl;
	return 0;
}
