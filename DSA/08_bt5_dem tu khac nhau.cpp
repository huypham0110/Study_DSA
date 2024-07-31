#include<iostream>
#include<algorithm>
#include<string>
#include<iomanip>
#include<sstream>
#include<vector>
#include<set>

using namespace std;

//Cho mot xau S gom nhieu tu duoc phan cach nhau boi cac dau cach
//Dem so luong cac tu khac nhau trong xau ma khong phan biet hoa thuong

int main() {

	//Cach 1--------------------------------------------------------
	//set<string> se;
	//string s;
	//getline(cin, s);
	//for (int i = 0; i < s.size(); i++) {
	//	s[i] = toupper(s[i]);
	//}
	//cout << s << endl;
	//stringstream ss(s);
	//string tmp;
	//while (ss >> tmp) {
	//	se.insert(tmp);
	//}
	//cout << se.size() << endl;


	//Cach 2--------------------------------------------------------
	set<string> se;
	string s;
	getline(cin, s);
	stringstream ss(s);
	string tmp;
	while (ss >> tmp) {
		for (char &x : tmp) {
			x = toupper(x);
		}
		cout << tmp << ' ';
		se.insert(tmp);
	}
	cout << endl;
	cout << se.size() << endl;
}