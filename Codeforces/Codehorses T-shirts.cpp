#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	string str;
	map<string, int> m;
	for(int i=0; i<n; i++){
		cin >> str;
		m[str]++;
	}
	int cnt = 0;
	for(int i=0; i<n; i++){
		cin >> str;
		if(m[str]>0)
			m[str]--;
		else
			cnt++;
		
	}
	cout << cnt;
}

