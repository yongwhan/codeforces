#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mx=1e6+77;
int n,q,k,l,r,a[mx];
struct dat {
	int l,r,idx;
}  p[mx];
ll x,b[mx],ret[mx];

int eval(int x) {
	return (x-1)/k;
}

bool cmp(dat &u, dat &v) {
	int x=eval(u.l), y=eval(v.l);
	if(x==y) return u.r<v.r;
	return x<y;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	scanf("%d %d", &n, &q);
	for (int i=1; i<=n; i++) scanf("%d", &a[i]);
	for (int i=1; i<=q; i++) scanf("%d %d", &p[i].l, &p[i].r), p[i].idx=i;
	k=sqrt(n);
	sort(p+1,p+q+1,cmp);
	l=1;
	for (int i=1; i<=q; i++) {
		while(l<p[i].l) x-=a[l]*(--b[a[l]]*2+1), l++;
		while(l>p[i].l) --l, x+=a[l]*(b[a[l]]++*2+1);
		while(r<p[i].r) ++r, x+=a[r]*(b[a[r]]++*2+1);
		while(r>p[i].r) x-=a[r]*(--b[a[r]]*2+1), r--;
		ret[p[i].idx]=x;
	}
	for (int i=1; i<=q; i++) printf("%I64d\n", ret[i]);
	return 0;
}
