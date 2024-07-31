#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

using ll = long long;

//Bai tap sort, xay dung ham comparison function
//Cho mang gom n phan tu. Sap xep sao cho:
//- So co nhieu chu so nguyen to hon thi dung sau
//- Neu co cung chu so nguyen to, So nao xuat hien truoc thi dung truoc

bool soNguyenTo(ll a) {
	for (ll i = 2; i < a; i++) {
		if (a % i == 0) {
			return false;
		}
	}
	return a > 1;
}

int demSoNguyenTo(ll a) {
	int ans = 0;
	while (a) {
		if (soNguyenTo(a%10)) {
			ans++;
		}
		a /= 10;
	}
	return ans;
}

bool cmp(ll a, ll b) {
	return demSoNguyenTo(a) < demSoNguyenTo(b);
}

int main() {
	ll n; cin >> n;
	ll a[100000];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	stable_sort(a, a + n, cmp);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";

	}
}