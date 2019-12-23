#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const int mx=2e5+77;
int n,T,a[mx],t[mx], q[mx], iter;

bool check(int thres) {
	iter=0;
	for (int i=1; i<=n; i++)
		if(a[i]>=thres) q[++iter]=t[i];
	if(iter<thres) return false;
	sort(q+1,q+iter+1);
	ll sum=0;
	for (int i=1; i<=thres; i++) sum+=q[i];
	return sum<=T;
}

bool cmp(int i, int j) {
	return t[i]<t[j];
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	cin>>n>>T;
	for (int i=1; i<=n; i++) cin>>a[i]>>t[i];
	int low=0, high=n;
	while(low<high) {
		int mid=(low+high)/2;
		if(check(mid+1)) low=mid+1;
		else high=mid;
	}
	int s=low, k=low;
	iter=0;
	for (int i=1; i<=n; i++) if(a[i]>=low) q[++iter]=i;
	sort(q+1,q+iter+1,cmp);
	cout << s << endl << k << endl;
	for (int i=1; i<=k; i++)
		cout << q[i] << " ";
	cout << endl;
	return 0;
}
