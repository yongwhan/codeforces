#include<bits/stdc++.h>
using namespace std;

class BigInt {
	public:
		BigInt(string s) {
			m_s=s;
		}

		BigInt(int x) {
			m_s=to_string(x);
		}

		BigInt() {
			m_s="0";
		}

		vector<int> tov(string &s) {
			int sz=s.size();
			vector<int> ans(sz,0);
			for (int i=0; i<sz; i++)
				ans[i]=s[sz-1-i]-'0';
			return ans;
		}

		string tos(vector<int> &v) {
			int sz=v.size();
			string ans;
			for (int i=0; i<sz; i++)
				ans=(char)(v[i]+'0')+ans;
			while(ans[0]=='0') ans=ans.substr(1);
			if(!ans.size()) return "0";
			return ans;
		}

		BigInt operator*(BigInt x) {
			string s=m_s, t=x.m_s;
			int n=s.size(), m=t.size(), l=n+m+1;
			vector<int> v=tov(s), w=tov(t), ans(l,0);
			for (int i=0; i<n; i++)
				for (int j=0; j<m; j++)
					ans[i+j]+=v[i]*w[j];
			for (int i=0; i<l-1; i++)
				ans[i+1]+=ans[i]/10, ans[i]%=10;
			return BigInt(tos(ans));
		}

		BigInt operator+(BigInt x) {
			string s=m_s, t=x.m_s;
			int n=s.size(), m=t.size(), l=max(n,m)+1;
			vector<int> v=tov(s), w=tov(t), ans(l,0);
			for (int i=0; i<n; i++)
				ans[i]+=v[i];
			for (int i=0; i<m; i++)
				ans[i]+=w[i];
			for (int i=0; i<l-1; i++)
				ans[i+1]+=ans[i]/10, ans[i]%=10;
			return BigInt(tos(ans));
		}

		BigInt operator/(int n) {
			string s=m_s;
			int sz=s.size(), cur=0;
			string ans;
			for (int i=0; i<sz; i++) {
				cur=cur*10+(s[i]-'0');
				ans+=('0'+cur/n);
				cur%=n;
			}
			while(ans[0]=='0') ans=ans.substr(1);
			if(!ans.size()) ans='0';
			return BigInt(ans);
		}

		BigInt operator-(BigInt x) {
			string s=m_s, t=x.m_s;
			int n=s.size(), m=t.size(), l=max(n,m);
			vector<int> v=tov(s), w=tov(t), ans(l,0);
			for (int i=0; i<n; i++)
				ans[i]+=v[i];
			for (int i=0; i<m; i++)
				ans[i]-=w[i];
			for (int i=0; i<l-1; i++) {
				if(ans[i]<0) {
					ans[i+1]--;
					ans[i]+=10;
				}
			}
			return BigInt(tos(ans));
		}

		friend std::ostream& operator<< (std::ostream &out, const BigInt &x) {
			out << x.m_s;
			return out;
		}

		friend std::istream& operator>> (std::istream &in, BigInt &x) {
			in >> x.m_s;
			return in;
		}

		friend bool operator< (const BigInt &a, const BigInt &b) {
			string s=a.m_s, t=b.m_s;
			if(s.size()!=t.size()) return s.size()<t.size();
			else return s<t;
		}

		friend bool operator> (const BigInt &a, const BigInt &b) {
			string s=a.m_s, t=b.m_s;
			if(s.size()!=t.size()) return s.size()>t.size();
			else return s>t;
		}

	private:
		string m_s;
};

BigInt eval(string &s, int x) {
	string a=s.substr(0,x), b=s.substr(x);
	return (a.empty()||b.empty()||b.front()=='0') ? BigInt(string(100777,'9')) : BigInt(a)+BigInt(b);
}

int main() {
	int l; string s; cin>>l>>s;
	int m=(l+1)/2;
	set<int> st;
	for (int i=0; i<l; i++)
		if(s[i]!='0')
			st.insert(i);
	int x=*st.lower_bound(m), y=*prev(st.lower_bound(m));
	cout<<min(eval(s,x),eval(s,y))<<endl;
	return 0;
}
