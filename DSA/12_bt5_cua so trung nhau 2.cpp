#include<iostream>
#include<algorithm>
#include<string>
#include<iomanip>
#include<sstream>
#include<vector>
#include<set>

using namespace std;

//Bai toan: Cho mang co n phan tu va 2 so nguyen duong k, t
//Kiem tra xem: co ton tai cua so kich co k nao cua mang sao cho 2 pt thuoc cua so do co do lech khong qua t

//VD: 1 5 8 1 5 9, k=3, t=3 thi ton tai cua so [1 5 8] co |5-8|<=3


//Input:
//Nhap so luong test case
//So luong phan tu trong mang va so nguyen k, so nguyen t
//Nhap cac phan tu trong mang

//Output:
//Co thi in YES, khong in NO

//Cac buoc lam:
//Vi du muon them phan tu a[j] vao cua so (dang xet phan tu a[j])
//Goi a[i] la cac phan tu trong cua so truoc do, kiem tra a[i] va a[j] xem |a[i] - a[j]| <= t hay khong?
//Tu do, kiem tra xem, voi a[j] muon them vao cua so, lieu trong cua so truoc do, co phan tu a[i] nao thoa a[j]-t <= a[i] <= a[j]+t
//Tu do, su dung lower_bound de kiem tra xem lieu co phan tu a[i] nao >= a[j]-t hay khong


int main() {
	int q; cin >> q;
	while (q--) {
		int n; cin >> n;
		int k; cin >> k;
		int t; cin >> t;
		int a[1001];
		multiset<int> se;

		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		bool res = false;

		for (int j = 0; j < k; j++) {
			// Kiem tra xem trong s co phan tu a[i] >= a[j]-t hay khong
			auto it = se.lower_bound(a[j] - t);
			if (it != se.end() && (*it <= a[j] + t)) {
				res = true;
				break;
			}
			se.insert(a[j]);
		}
		if (res) {
			cout << "YES" << endl;
			continue;
		}

		for (int j = k; j < n; j++) {
			auto it1 = se.find(a[j - k]);
			se.erase(it1);
			auto it = lower_bound(se.begin(), se.end(), a[j] - t);
			if (it != se.end() && *it <= a[j] + t) {
				res = true;
				break;
			}
			se.insert(a[j]);
		}
		if (res) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}