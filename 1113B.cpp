#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	int sum=0;
	vector<int> a(n);
	multiset<int> st;
	for (int i=0; i<n; i++)
		cin>>a[i], sum+=a[i], st.insert(a[i]);
	int ret=1e9;
	for (int i=0; i<n; i++) {
		for (int x=1; x<=100; x++) {
			if(a[i]%x==0) {
				st.erase(st.find(a[i]));
				int q=*st.begin(), add=(q*x-q)-(a[i]-a[i]/x);
				sum+=add;
				ret=min(ret,sum);
				st.insert(a[i]);
				sum-=add;
			}
		}
	}
	cout << ret << endl;
	return 0;
}
