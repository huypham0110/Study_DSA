#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

using ll = long long;

//Bai tap sort, xay dung ham comparison function
//Cho mang gom n phan tu. Sap xep sao cho:
//- So co nhieu so le hon thi dung truoc
//- Neu co cung chu so le, So nho hon se dung truoc

int demSoLe(ll a) {
	int ans = 0;
	while (a) {
		if ((a % 10) % 2 == 1) {
			ans++;
		}
		a /= 10;
	}
	return ans;
}

bool cmp(ll a, ll b) {
	if (demSoLe(a) != demSoLe(b)) {
		return demSoLe(a) > demSoLe(b);
	}
	return a < b;
	
}

int main() {
	ll n; cin >> n;
	ll a[100000];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n, cmp);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
		
	}
}