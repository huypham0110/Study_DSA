#include<iostream>
#include<algorithm>
#include<string>
#include<iomanip>
#include<sstream>
#include<vector>
#include<set>

using namespace std;

//Cho mang a[] gom n phan tu. Tinh tong cac so trong day tu vi tri l toi r [l;r] 
//1 <= l <= r <= N

//Nhap so nguyen n
//Nhap n gia tri cua mang
//Nhap so lan truy van mong muon
//Nhap 2 vi tri l, n


int main() {

	// Cach 1: Do phuc tap O(N) -----------------------------------------------------------
	//int n; cin >> n;
	//int a[100];
	//for (int i = 0; i < n; i++) {
	//	cin >> a[i];
	//}
	//int q; cin >> q;
	//while (--q) {
	//	
	//	int l, r; cin >> l >> r;
	//	l--; r--;
	//	long long sum = 0;
	//	for (int i = l; i <= r; i++) {
	//		sum += a[i];
	//	}
	//	cout << sum << endl;
	//}

	// Cach 2: Cach toi uu, xai MANG CONG DON ----------------------------------------------
	int n; cin >> n;
	int a[100];
	long long f[100];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	//Tinh mang f[]
	for (int i = 0; i < n; i++) {
		if (i == 0) f[i] = a[i];
		else f[i] = f[i - 1] + a[i];
	}

	int q; cin >> q;
	while (--q) {

		int l, r; cin >> l >> r;
		l--; r--;
		
		if (l == 0) {
			cout << f[r] << endl;
		}
		else cout << f[r] - f[l - 1] << endl;
	}
}