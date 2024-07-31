#include<iostream>
#include<algorithm>
#include<string>
#include<iomanip>
#include<sstream>
#include<vector>
#include<set>

using namespace std;

//Cho mang a[] co n phan tu, va q thao tac.
//Moi thao tac se tang cac phan tu trong doan tu chi so L toi R cua mang len K don vi
//In ra mang a[] sau q thao tac

int main() {

	// Cach 1: Cach ngay tho ---------------------------------------------------
	//int n; cin >> n;
	//int q; cin >> q;
	//int a[100];

	//for (int i = 0; i < n; i++) {
	//	cin >> a[i];
	//}
	//
	//while (q--) {
	//	int l, r, k;
	//	cin >> l >> r >> k;
	//	for (int i = l; i <= r; i++) {
	//		a[i] += k;
	//	}
	//}
	//for (int i = 0; i < n; i++) {
	//	cout << a[i] << ' ';
	//}
		

	// Cach 2: Cach toi uu, xai MANG HIEU --------------------------------------
	int n; cin >> n;
	int q; cin >> q;
	int a[100];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	// Xay dung mang hieu
	long long d[105];
	for (int i = 0; i < n; i++) {
		if (i == 0) d[i] = a[i];
		else d[i] = a[i] - a[i - 1];
	}

	while (q--) {
		int l, r, k;
		cin >> l >> r >> k;
		d[l] += k;
		d[r + 1] -= k;
	}

	long long sum = 0;
	for (int i = 0; i < n; i++) {
		sum += d[i];
		cout << sum << ' ';
	}
	//Hoac
	//for (int i = 0; i < n; i++) {
	//	if (i == 0) a[i] = d[i];
	//	else a[i] = a[i - 1] + d[i];
	//}

	//for (int i = 0; i < n; i++) {
	//	cout << a[i] << ' ';
	//}
}