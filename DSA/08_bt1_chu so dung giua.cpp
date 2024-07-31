#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

//Cho so nguyen khong am N, hay xac dinh chu so dung giua. Neu khong co in ra NOT FOUND
//VD: N = 12345 in ra 3, N = 1222 in ra NOT FOUND

int main() {

	string n;
	cin >> n;

	if (n.size() % 2 == 0) {
		cout << "NOT FOUND\n";
	}
	else {
		cout << n.size() << endl;
		cout << n.size() / 2 << endl;
		cout << n[n.size() / 2] << endl;
	}
}