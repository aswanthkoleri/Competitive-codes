#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pb push_back
#define fi(a,b) for(ll i=a;i<b;i++)
#define fj(a,b) for(ll j=a;j<b;j++)
#define M 1000000007
#define mp make_pair
#define PI 3.14159265358979323846
#define X first
#define Y second
#define _all(v) v.begin(), v.end()
 
 
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
 
//#define int long long
vector<pair<int, int> > mergeInterval(vector<pair <int, int> >&A) {
	sort(_all(A));
	vector<pair<int, int> >res;
 
	pair<int, int> last = A[0];
 
	for(auto i: A) {
		if(i.X > last.Y) {
			res.push_back(last);
			last = i;
		}
		else {
			last.X =  min(last.X, i.X);
			last.Y =  max(last.Y, i.Y);
		}
	} 
 
	if(res.empty() || last.X != res.back().X)
		res.push_back(last);
	return res;
}
 
 
int main() {
	fast;
 
	int n; cin>> n;
	vector<int> a(n);
 
	for(int i=0; i<n; i++) {
		a[i] = n-i;
	}
 
	int m; cin>> m;
	vector<pair<int, int> > q[2];
 
	for(int i=0; i<m; i++) {
		int t, l, r;	cin >> t >> l >> r;
		l--;	r--;
		q[t].push_back({l,r}); 
	}
 
	if(q[1].empty())	{
		cout <<"YES\n";
		for(auto x: a)
			cout << x << " ";
		cout << endl;	return 0;
	}
 
	vector<pair<int, int>> new_range = mergeInterval(q[1]);
 
	for(auto x: new_range) 
		for(int i=x.X; i<=(x.X+x.Y)/2; i++)
			swap(a[i], a[x.Y-(i-x.X)]);
 
 
	bool possible = true;
	for(auto x: q[0]){
		bool tmp = false;
		for(int i=x.X; i<x.Y; i++)
			if(a[i]>a[i+1]){
				tmp = true;
				break;
			}
		possible = possible and tmp;
	}
 
	if(possible){
		cout << "YES" << endl;
		for(int i=0; i<n; i++)
			cout << a[i] << " ";
		cout << endl;
	}
	else
		cout << "NO" << endl;
 
	return 0;
}
