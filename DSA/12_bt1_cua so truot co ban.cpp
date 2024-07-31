#include<iostream>
#include<algorithm>
#include<string>
#include<iomanip>
#include<sstream>
#include<vector>
#include<set>

using namespace std;

//Cho mang co n phan tu va so k.
//Tim day con lien tiep cua mang co do dai k sao cho tong cac phan tu trong day con la lon nhat va liet ke day con do
//Neu co cung day con co max bang nhau thi in ra day con dau tien

//Input:
//Nhap so luong test case
//So luong phan tu trong mang va so nguyen k
//Nhap cac phan tu trong mang

//Output:
//Tong lon nhat
//Day con

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int k; cin >> k;
		int a[1001];

		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		long long sum = 0;
		for (int i = 0; i < k; i++) {
			sum += a[i];
		}
		long long res = sum;
		int idx = 0; //Chi so bat dau cua cua so
		for (int i = k; i < n; i++) {
			sum = sum - a[i - k] + a[i];
			if (sum > res) {
				res = sum;
				idx = i - k + 1;
			}
		}
		cout << res << endl;
		for (int i = 0; i < k; i++) {
			cout << a[i + idx] << ' ';
		}
		cout << endl;
	}
}