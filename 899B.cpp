#include<bits/stdc++.h>
using namespace std;

int days[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool leap(int x) {
	return (x%400==0)||((x%100)&&(x%4==0));
}

int main() {
	vector<int> v;
	for (int y=0; y<800; y++) {
		for (int i=1; i<=12; i++) {
			int cur=days[i-1];
			if(leap(y) && i==2) cur++;
			v.push_back(cur);
		}
	}

	int sz=v.size(), n; cin>>n;
	vector<int> w(n);
	for (int i=0; i<n; i++)
		cin>>w[i];

	for (int i=0; i<sz-n; i++) {
		bool ok=true;
		for (int j=0; j<n; j++)
			if(w[j]!=v[i+j]) ok=false;
		if(ok) {
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}
