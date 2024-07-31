#include<iostream>
#include<algorithm>
#include<string>
#include<iomanip>
#include<sstream>

using namespace std;

//Cho xau ki tu s
//Sap xep cac ki tu trong xau theo thu tu tang dan, giam dan

int main() {

	string s;
	getline(cin, s);

	sort(s.begin(),s.end());
	cout << s << endl;

	sort(s.begin(), s.end(),greater<char>());
	cout << s << endl;
}
