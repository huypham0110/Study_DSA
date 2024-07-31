#include<iostream>
#include<algorithm>
#include<string>
#include<iomanip>
#include<sstream>
#include<vector>
#include<set>

using namespace std;

//Cho mot xau S gom nhieu tu duoc phan cach nhau boi dau cach
//Sap xep cac tu trong xau theo thu tu chieu dai tang dan, neu hai tu co cung chieu dai thi sap xep theo tu dien

bool cmp(string a,string b) {
	if (a.size() != b.size()) {
		return a.size() < b.size();
	}
	return a < b;
}

int main() {

	vector<string> v;

	set<string> se;
	string s;
	getline(cin, s);
	stringstream ss(s);
	string tmp;
	while (ss >> tmp) {
		v.push_back(tmp);
	}
	sort(v.begin(), v.end(), cmp);
	for (string x : v) {
		cout << x << ' ';
	}
}