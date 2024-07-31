#include<iostream>
#include<map>
#include<vector>

using namespace std;

// Dem so lan xuat hien cac phan tu trong mang, in ra kem theo tan suat xuat hien cua chung
//8
//1 1 2 1 3 5 1 -4 
//
//Output
//-4 1
//1 4 
//2 1
//3 1
//5 1

int main() {

	map<int, int> mp;
	multimap<int, int> mlmp;

	//mp[100] = 200;
	//mp[200] = 300;
	//mp.insert({ 300,400 });
	//mp.insert({ 400,500 });
	//for (pair<int,int> x : mp) {
	//	cout << x.first << " " << x.second << endl;
	//}
	//for (auto x : mp) {
	//	cout << x.first << " " << x.second << endl;
	//}
	//for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++) {
	//	cout << (*it).first << " " << (*it).second << endl;
	//}


	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		mp[x]++;
	}
	for (auto it : mp) {
		cout << it.first << " " << it.second << endl;
	}
}