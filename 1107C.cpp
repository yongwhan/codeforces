#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k; cin>>n>>k;
	vector<int> a(n+1,0);
	for (int i=0; i<n; i++)
		cin>>a[i];
	string s; cin>>s; s+='@';
	priority_queue<int> pq;
	char cur='@';
	ll ret=0;
	for (int i=0; i<n+1; i++) {
		if(s[i]!=cur) {
			for (int i=0; i<k; i++) {
				if(pq.empty())
					break;
				ret+=pq.top(); pq.pop();
			}
			while(!pq.empty())
				pq.pop();
			cur=s[i];
		}
		pq.push(a[i]);
	}
	cout << ret << endl;
	return 0;
}
