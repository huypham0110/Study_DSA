#include <iostream>
#include<set>
#include<map>

using namespace std;


// Bai tap so lan xuat hien 


int main()
{
	
	int n; cin >> n;
	int a[100];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	// Su dung multiset-------------------------

	//multiset<int> se;
	//for (int i = 0; i < n; i++) {
	//	se.insert(a[i]);
	//	cout << se.count(a[i]) << " ";
	//}


	// Su dung map------------------------------

	map<int, int> mp;
	for (int i = 0; i < n; i++) {
		mp[a[i]]++;
		cout << mp[a[i]] << " ";
	}


}
