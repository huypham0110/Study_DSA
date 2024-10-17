#include<iostream>
#include<algorithm>
#include<string>
#include<iomanip>
#include<sstream>
#include<vector>
#include<set>

using namespace std;

//Bai toan: Segment with small set
//Cho mang a[] gom n phan tu va so nguyen k. Tim SO LUONG day con co <= k phan tu khac nhau

//Input: 
//

//Output:
//

//Cac buoc lam:
//Su dung ky thuat hai con tro left va right (deu khai bao bang 0)
//

int main() {
	int n, k; cin >> n >> k;
	int a[100];
	for (int i = 0; i < n; i++) cin >> a[i];

	int l = 0, r = 0;
	int ans = 0;
	int cnt = 0; // Dem so luong phan tu khac nhau trong segment
	int dem[100] = { 0 }; // Dem so lan xuat hien cua phan tu

	for (r = 0; r < n; r++) {
		dem[a[r]]++;
		if (dem[a[r]] == 1) {
			cnt++;
		}
		while (cnt > k) {
			if (dem[a[l]] == 1) cnt--;
			dem[a[l]]--;
			l++;
		}
		ans += r - l + 1;
	}
	cout << ans << endl;
}