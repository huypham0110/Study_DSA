#include<iostream>
#include<algorithm>
#include<string>
#include<iomanip>
#include<sstream>

using namespace std;

void inHoa(string& s) {
	for (int i = 0; i < s.size(); i++) {
		s[i] = toupper(s[i]);
	}
}

void inThuong(string& s) {
	for (int i = 0; i < s.size(); i++) {
		s[i] = tolower(s[i]);
	}
}


int main() {
	
	string s = "Hoc   lap   trinh   c++  ne";

	string res = "";
	/*while (getline(cin, s)) {
		if (s == "out") break;
		res += s + "\n";
		
	}
	cout << res << endl;*/
	
	//cout << s << endl;
	//for (char x : s) {
	//	cout << x << " ";
	//}
	//cout << endl;
	//for (int i = 0; i < s.size(); i++) {
	//	cout << s[i] << " ";
	//}
	//cout << endl;
	//for (auto it = s.begin(); it != s.end(); it++) {
	//	cout << *it << ' ';
	//}

	/*string t = "lap";
	if (s.find(t) != string::npos) {
		cout << "FOUND" << endl;
		cout << s.find(t) << endl;
	}
	else cout << "NOT FOUND" << endl;*/

	//string a = "28tech";
	//string b = "blog";
	//a = a + " " + b;
	//a += '@';
	//cout << a << endl;
	// 
	//if (a < b) {
	//	cout << "a dung truoc b\n";
	//}
	//else cout << "a dung sau b\n";

	//inHoa(s);
	//cout << s << endl;
	//inThuong(s);
	//cout << s << endl;

	//string test = "-123h11122";
	//int n = stoi(test); //string to int
	//cout << n << endl;
	// 
	//string test1 = "1212.374926";
	//double d = stod(test1);
	//cout << fixed << setprecision(2) << d << endl;

	stringstream ss(s);
	string tmp;
	while (ss >> tmp) {
		cout << tmp << endl;
	}
}