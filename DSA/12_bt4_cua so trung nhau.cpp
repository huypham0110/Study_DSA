#include<iostream>
#include<algorithm>
#include<string>
#include<iomanip>
#include<sstream>
#include<vector>
#include<set>

using namespace std;

//Bai toan: Cho mang co n phan tu va so nguyen duong k
//Kiem tra xem: co ton tai cua so kich co k nao cua mang chua hai phan tu giong nhau khong

//Input:
//Nhap so luong test case
//So luong phan tu trong mang va so nguyen k
//Nhap cac phan tu trong mang

//Output:
//

//Cac buoc lam:
//Tao mot cua so kich co K, xem cua so nao co so den hong it nhat


int main() {
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		int k; cin >> k;
		int a[1001];
		set<int> se;

		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		bool res = false;

		for (int i = 0; i < k; i++) {
			if (se.count(a[i]) > 0) {
				res = true;
				break;
			}
			se.insert(a[i]);
		}
		if (res) {
			cout << "YES" << endl;
			continue;
		}

		for (int i = k; i < n; i++) {
			se.erase(a[i - k]);
			if (se.count(a[i]) > 0) {
				res = true;
				break;
			}
			se.insert(a[i]);
		}
		if (res) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	
}