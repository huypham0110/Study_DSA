#include<iostream>
#include<algorithm>
#include<string>
#include<iomanip>
#include<sstream>
#include<vector>
#include<set>

using namespace std;

//Cho mang co n phan tu va so k.
//Sap dat lai cac phan tu cua mang, sao cho: cac so nho hon hoac bang k dung canh nhau 
//Su dung it phep doi cho nhat co the

//Input:
//Nhap so luong test case
//So luong phan tu trong mang va so nguyen k
//Nhap cac phan tu trong mang

//Output:
//

//VD: a[]={2,1,5,6,3}, k=3
//=> a[]={2,1,3,6,5} bang cach doi cho 5 va 3

//Cac buoc lam:
//d: so luong phan tu <= k trong mang
//Tim cac cua so co kich co d, xem cua so nao chua nhieu so <= k nhat 
//Khi do, so luong phep hoan doi = d - (so phan tu <= k trong cua so)


int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int k; cin >> k;
		int a[1001];
		int d = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (a[i] <= k) d++;
		}
		int cnt = 0;
		for (int i = 0; i < d; i++) {
			if (a[i] <= k) cnt++;
		}
		int ans = cnt;
		for (int i = d; i < n; i++) {
			if (a[i - d] <= k) cnt--;
			if (a[i] <= k) cnt++;
			if (cnt > ans) ans = cnt;
		}
		cout << d - ans << endl;
	}
}