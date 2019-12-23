#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n,m; cin>>n>>m;
    vector<ll> a(n), b(m);
    for (int i=0; i<n; i++) cin>>a[i];
    for (int i=0; i<m; i++) cin>>b[i];
    ll ret=0;
    bool first=true;
    for (int i=0; i<n; i++) {
        ll cur=0;
        bool flag=true;
        for (int j=0; j<n; j++) if(i!=j) {
            for (int k=0; k<m; k++) {
                ll tmp=a[j]*b[k];
                if(flag) flag=false, cur=tmp;
                else cur=max(cur,tmp);
            }
        }
        if(first) first=false, ret=cur;
        else ret=min(ret,cur);
    }
    cout << ret << endl;
    return 0;
}
