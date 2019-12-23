#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

const string ERROR="Error occurred";

void print(stack<int> stk) {
	while(!stk.empty())
		cout << stk.top() << " ", stk.pop();
	cout << endl;
}

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n; cin>>n;
	vector<string> v;
	string s;
	while(cin>>s)
		v.push_back(s);
	int sz=v.size();
	if(sz!=n*2-1) {
		cout << ERROR << endl;
		return 0;
	}

	if(n==1&&v[0]=="int") {
		cout << "int" << endl;
		return 0;
	}

	string ret;
	stack<int> stk;
	for (int i=0; i<sz; i++) {
		string cur=v[i];
		if(cur=="pair") {
			if(!ret.empty()&&ret.back()!='<')
				ret+=",";
			stk.push(0);
			ret+="pair<";
		} else {
			if(stk.empty()) {
				cout << ERROR << endl;
				return 0;
			}
			int cur=stk.top(); stk.pop();
			cur++;
			stk.push(cur);
			if(cur==1) ret+="int";
			else if(cur==2) ret+=",int";

			while(!stk.empty()) {
				int cur=stk.top();
				if(cur!=2) break;
				ret+=">";
				stk.pop();
				if(stk.empty()) break;
				cur=stk.top(); stk.pop();
				cur++;
				stk.push(cur);
			}
		}
	}
	if(!stk.empty()) {
		cout << ERROR << endl;
		return 0;
	}
	cout << ret << endl;
	return 0;
}
