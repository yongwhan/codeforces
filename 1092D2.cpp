#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin>>n;
	vector<int> a(n);
	for (int i=0; i<n; i++)
		cin>>a[i];
	stack<int> st;
	int mx = *max_element(a.begin(), a.end());
	for (int i=0; i<n; i++) {
		if (a[i]==mx) continue;
		int j = i-1;
		while (j+1<n && a[j+1]!=mx) {
			j++;
			if (!st.empty()&&st.top()==a[j]) st.pop();
			else if (st.empty()||st.top()>a[j]) st.push(a[j]);
			else {
				cout<<"NO\n";
				return 0;
			}
		}

		if (!st.empty()) {
			cout<<"NO\n";
			return 0;
		}
		i=j;
	}
	cout<<"YES\n";
	return 0;
}
