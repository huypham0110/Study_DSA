#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

using ll = long long;

//Cho mang a[] gom n phan tu DA SAP XEP TANG DAN va so nguyen X, nhiem vu cua ban la:
//1. In ra chi so dau tien cua phan tu >= X trong mang, neu khong co phan tu nao >= X thi in ra -1
//2. In ra chi so dau tien cua phan tu > X trong mang, neu khong co phan tu nao > X thi in ra - 1
//3. In ra chi so dau tien cua phan tu X trong mang, neu X khong ton tai in ra - 1
//4. In ra chi so cuoi cung cua phan tu X trong mang, neu X khong ton tai in ra - 1
//5. Tu ket qua cua 3 va 4, in ra so lan xuat hien cua X trong mang
//
//Chu y: Code voi hai truong hop, su dung mang va vecto, chi su dung ham lower_bound va upper_bound

//input:
//12 8
//2 3 4 4 5 6 8 8 8 8 10 10 

//output:
//6
//10
//6
//9
//4


int main() {
	int n; 
	int x;
	cin >> n >> x;
	int a[100];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	//lower_bound
	auto it1 = lower_bound(a, a + n, x);
	if (it1 != (a + n)) {
		cout << it1 - a << endl;
	}
	else cout << "-1\n";

	auto it2 = upper_bound(a, a + n, x);
	if (it2 != (a + n)) {
		cout << it2 - a << endl;
	}
	else cout << "-1\n";

	int p1 = -1, p2 = -1;
	if (*it1 == x) {
		p1 = it1 - a;
	}

	it2--;
	if (*it2 == x) {
		p2 = it2 - a;
	}

	cout << p1 << endl;
	cout << p2 << endl;
	
	if (p1 != -1) {
		cout << p2 - p1 + 1 << endl;
	}
	else cout << "Khong xuat hien" << endl;
}