#include<iostream>
#include<algorithm>
#include<string>
#include<iomanip>
#include<sstream>

using namespace std;

//Cho mot xau S gom nhieu tu, cac tu duoc phan cach nhau boi cac dau '.', ',', '!', '?'.
//Hay liet ke cac tu xuat hien trong xau, giua cac tu cach nhau mot dau cach, sau tu cuoi cung khong duoc in thua dau cach

int main() {

	string s;
	getline(cin, s);
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '.' || s[i] == ',' || s[i] == '!' || s[i] == '?') {
			s[i] = ' ';
		}
	}
	stringstream ss(s);
	string tmp;
	while (ss >> tmp) {
		cout << tmp << endl;
	}
}