
#include <iostream>
#include<set>

using namespace std;

int main()
{
	// Khai bao
	set<int> se;

	// Them cac phan tu
	se.insert(2);
	se.insert(3);
	se.insert(1);
	se.insert(2);
	se.insert(0); 
	se.insert(4);
	se.insert(3);

	// In ra so phan tu
	cout << se.size() << endl;

	// Duyet tat ca cac phan tu
	for (int i : se) {
		cout << i << ' ';
	}
	cout << endl; 
	for (auto it = se.begin(); it != se.end(); it++) {
		cout << *it << ' ';
	}
	cout << endl;
	for (auto it = se.rbegin(); it != se.rend(); it++) {
		cout << *it << ' ';
	}
	cout << endl;
	if (se.find(12) != se.end()) {
		cout << "FOUND" << endl;
	}
	else {
		cout << "NOT FOUND" << endl;
	}
}


//-------------------------------------------------------------------------------------------------------------
// Bai tap: Dem xem trong mang co bao nhieu phan tu khac nhau
// VD: 2 1 2 1 3 => co 3 so khac nhau la: 1 2 3
// Huong giai: Them het cac phan tu vao set (vi set se loai bo cac pt trung)
//				Sau do in ra size cua set la xong

/*
#include <iostream>
#include<set>

using namespace std;

int main()
{
	set<int> se;
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int tmp; cin >> tmp;
		se.insert(tmp);
	}
	cout << se.size() << endl;
}
*/
