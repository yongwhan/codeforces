#include<bits/stdc++.h>
using namespace std;

typedef pair<char,int> ci;

int ret=0;
vector<ci> eval(string &s) {
	vector<ci> v;
	int n=s.size();
	char cur=s[0];
	int val=0;
	for (int i=0; i<n; i++) {
		char ch=s[i];
		if(ch!=cur) {
			v.push_back({cur,val});
			val=1, cur=ch;
		}
		else
			val++;
	}
	v.push_back({cur,val});
	return v;
}

void combine(vector<ci> &v) {
	v.push_back({'!',0});
	int n=v.size(), cur=0;
	vector<ci> w;
	char ch=v[0].first;
	for (int i=0; i<n; i++) {
		char x=v[i].first;
		int val=v[i].second;
		if(x!=ch) {
			if(isalpha(ch))
				w.push_back({ch,cur});
			ch=x;
			cur=val;
		}
		else if(x==ch)
			cur+=val;
	}
	v=w;
}

void delete_zero(vector<ci> &v) {
	vector<ci> w;
	int n=v.size();
	for (int i=0; i<n; i++)
		if(v[i].second)
			w.push_back(v[i]);
	v=w;
}

void combine_and_delete_zero(vector<ci> &v) {
	if(!v.empty())
		delete_zero(v);
	if(!v.empty())
		combine(v);
}

vector<ci> next(vector<ci> v) {
	combine_and_delete_zero(v);
	int n=v.size();
	ci first=v[0], last=v[n-1];
	int step=min(first.second, last.second);
	for (int i=1; i<n-1; i++) {
		int cur=v[i].second;
		if(cur)
			step=min(step, (cur+1)/2);
	}
	v[0].second-=step;
	for (int i=1; i<n-1; i++)
		v[i].second=max(0,v[i].second-2*step);
	v[n-1].second-=step;
	ret+=step;
// cout << "+" << step << ": " << ret << endl;
	combine_and_delete_zero(v);
	return v;
}

void print(vector<ci> &v) {
	cout << "###" << endl;
	for (auto x : v)
		cout << x.first << ":" << x.second << endl;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	string s; cin>>s;
	vector<ci> cur=eval(s);
	ret=0;
	while(1) {
		if(cur.size()<=1) break;
//		print(cur);
		vector<ci> nxt=next(cur);
		if(cur==nxt) break;
		if(nxt.size()<=1) break;
		cur=nxt;
	}
	cout << ret << endl;
	return 0;
}
