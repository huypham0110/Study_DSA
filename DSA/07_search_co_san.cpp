#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

using ll = long long;

//Binary_search, lower_bound, upper_bound

//Linear search: O(N)

//Binary search: O(logN) 
//DK: Mang phai duoc sap xep truoc
//binary_search(a, a + n, x)

//lower_bound: O(logN), Mang phai duoc sap xep truoc
//Tra ve VI TRI (con tro, iterator) cua phan tu "DAU TIEN" "LON HON HOAC BANG" X
//lower_bound(a, a + n, x)
//lower_bound(v.begin(), v.end(), x)
//Neu khong co gia tri nao thoa dieu kien tim kiem => tra ve (a + n) => mot gia tri rac

//upper_bound: O(logN), Mang phai duoc sap xep truoc
//Giong lower_bound, nhung Tra ve "LON HON" X

int main() {
	int n; cin >> n;
	int a[100];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	//Binary search
	if (binary_search(a, a + n, 2)) {
		cout << "Found\n";
	}
	else {
		cout << "Not found\n";
	}
	
	//lower_bound
	auto it = lower_bound(a, a + n, 6);
	cout << *it << endl;

	//upper_bound
	auto it1 = upper_bound(a, a + n, 6);
	cout << *it1 << endl;
}