#include <bits/stdc++.h>

#define ll long long

using namespace std;

void decode() {
	int a[100], n, k;
	cin >> n >> k;
	for(int i=0; i<n; ++i) {
		cin >> a[i];
	}
	for(int i=0; i<n; ++i) {
		a[i] += k;
	}
	int cnt=0;
	for(int i=0; i<n; ++i) {
		if(a[i]%7==0) cnt++;
	}
	cout << cnt << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
}
