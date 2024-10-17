#include<iostream>
#include<algorithm>
#include<string>
#include<iomanip>
#include<sstream>
#include<vector>
#include<set>

using namespace std;

//Bai toan: Number of Segment with small sum
//Cho mang a[] gom n phan tu va so nguyen s. Tim SO LUONG day con co tong cac phan tu trong do <= s

//Input: 
//

//Output:
//

//Cac buoc lam:
//Su dung ky thuat hai con tro left va right (deu khai bao bang 0)
//
//Tinh tong cac phan tu tu a[0] toi a[r], neu <= s thi tang r va tiep tuc cong
//Den khi nao tong > s thi se dich con tro left sang phai, dich den khi nao tong <= s 
//So luong segment = r - l + 1

int main() {
	int n, s; cin >> n >> s;
	int a[100];
	for (int i = 0; i < n; i++) cin >> a[i];

	long long sum = 0;
	int l = 0, r = 0;
	int ans = 0;
	for (r = 0; r < n; r++) {
		sum += a[r];
		while (sum > s) {
			sum -= a[l];
			l++;
		}
		ans += (r - l + 1);
	}
	cout << ans << endl;
}