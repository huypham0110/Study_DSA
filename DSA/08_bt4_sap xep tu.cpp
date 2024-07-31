#include<iostream>
#include<algorithm>
#include<string>
#include<iomanip>
#include<sstream>
#include<vector>

using namespace std;

//Cho mot xau S gom nhieu tu duoc phan cach nhau boi cac dau cach
//Thuc hien sap xep cac tu trong cau theo thu tu tu dien tang dan va giam dan

int main() {
	vector<string>v;
	string s;
	getline(cin, s);
	stringstream ss(s);
	string tmp;
	while (ss >> tmp) {
		v.push_back(tmp);
	}

	sort(v.begin(), v.end());
	for (auto x : v) {
		cout << x << ' ';
	}
	cout << endl;
	sort(v.begin(), v.end(),greater<string>());
	for (auto x : v) {
		cout << x << ' ';
	}
}