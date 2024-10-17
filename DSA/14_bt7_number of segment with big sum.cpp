#include<iostream>
#include<algorithm>
#include<string>
#include<iomanip>
#include<sstream>
#include<vector>
#include<set>

using namespace std;

//Bai toan: Segment with big sum
//Cho mang a[] gom n phan tu va so nguyen s. Tim SO LUONG day con co tong cac phan tu trong do >= s

//Input: 
//

//Output:
//

//Cac buoc lam:
//Su dung ky thuat hai con tro left va right (deu khai bao bang 0)
//Do dai cua day con do se bang (right - left + 1)
//Cong tong can phan tu tu a[0] toi a[r]
//Toi khi nao >= s thi cap nhat, dong thoi rut gon left (dich left qua phai) 

int main() {
	int n, s; cin >> n >> s;
	int a[100];
	for (int i = 0; i < n; i++) cin >> a[i];

	long long sum = 0;
	int l = 0, r = 0;
	int ans = 0;
	for (r = 0; r < n; r++) {
		sum += a[r];
		while (sum >= s) {
			ans += (n - r);
			sum -= a[l];
			l++;
		}
	}
	cout << ans << endl;
}