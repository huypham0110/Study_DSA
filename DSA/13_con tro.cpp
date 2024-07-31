#include<iostream>
#include<algorithm>
#include<string>
#include<iomanip>
#include<sstream>
#include<vector>
#include<set>

using namespace std;

void double1(int x) {
	x *= 2;
}

void double2(int &x) {
	x *= 2;
}

void double3(int* x) {
	(*x) *= 2;
}

struct SinhVien
{
	string ten, diachi;
	int tuoi;
};

int main() {

	/*int a = 100;
	int* ptr = &a;

	cout << &a << endl;
	cout << ptr << endl;
	cout << *ptr << endl;*/

	/*int n = 1000;
	double1(n);
	cout << n << endl;
	double2(n);
	cout << n << endl;
	double3(&n);
	cout << n << endl;*/

	/*SinhVien sv;
	sv.ten = "Huy Pham";
	sv.tuoi = 22;
	sv.diachi = "Quang Ngai";
	cout << sv.ten << " " << sv.tuoi << " " << sv.diachi << endl;

	SinhVien* ptrSV = &sv;
	ptrSV->ten = "Huy ne";
	cout << (*ptrSV).ten << " " << ptrSV->tuoi << " " << ptrSV->diachi << endl;*/

	/*int a[5];
	for (int i = 0; i < 5; i++) {
		//cin >> a[i];
		cin >> *(a + i);
	}
	for (int i = 0; i < 5; i++) {
		cout << a[i] << ' ';
	}
	cout << endl;
	int* b = a;
	for (int i = 0; i < 5; i++) {
		cout << b[i] << ' ';
	}*/


}