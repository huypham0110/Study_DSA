#include<iostream>
#include<algorithm>
#include<string>
#include<iomanip>
#include<sstream>
#include<vector>
#include<set>

using namespace std;

//Bai toan: Number of Segment with small sum
//Cho mang a[] gom n phan tu va so nguyen x. In ra VI TRI cua hai so co tong bang x (hai so khac nhau)

//Input: 
//

//Output:
//

//Cac buoc lam:
//Su dung ky thuat hai con tro left va right (o 2 vi tri dau va cuoi, dich dan ve giua)
// 
//Dau tien, sap xep theo tang dan. Vi sap xep tang dan se lam mat vi tri ban dau, nen su dung vector pair
//.first luu gia tri, .second luu vi tri = i
//Lay tong = max + min, neu tong < x thi tang left, neu tong > x thi giam right

int main() {
	int n, x; cin >> n >> x;
	vector<pair<int, int>> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i].first;
		v[i].second = i;
	}
	sort(v.begin(), v.end());
	int l = 0, r = n - 1;
	while (l < r) { //Khong dung dau = de tranh truong hop trung vi tri
		int sum;
		int a = v[l].first;
		int b = v[r].first;
		sum = a + b;
		if (sum == x) {
			cout << v[l].second + 1 << ' ' << v[r].second + 1;
			return 0;
		}
		else if (sum < x) {
			++l;
		}
		else --r;
	}
	cout << "IMPOSSIBLE\N";
		
}