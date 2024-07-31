#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

using ll = long long;

//Bai tap sort, xay dung ham comparison function
//Cho mang gom n phan tu. Sap xep sao cho:
//- So chan dung truoc, le dung sau (tach biet ra)
//- Trong do, so chan tang dan, so le giam dan

//output:
//22 88 100 31 17 5

bool cmp(ll a, ll b) {
	int da = a % 2;
	int db = b % 2;
	if (da == 0 && db == 0) {
		return a < b;
	}
	if (da != 0 && db != 0) {
		return a > b;
	}
	if (da == 0 && db != 0) {
		return true;
	}
	return false;
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