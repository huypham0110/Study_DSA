#include<iostream>
#include<algorithm>
#include<string>
#include<iomanip>
#include<sstream>
#include<vector>
#include<set>

using namespace std;

//Bai toan: Segment with small spread
//Cho mang a[] gom n phan tu va so nguyen k. Tim SO LUONG segments co (MAX - MIN <= k)

//Input: 
//

//Output:
//

//Cac buoc lam:
//Su dung ky thuat hai con tro left va right (deu khai bao bang 0)
//Cho vao multiset de tu sap xep

int main() {
	int n, k; cin >> n >> k;
	int a[100];
	for (int i = 0; i < n; i++) cin >> a[i];

	multiset<int> s;

	int l = 0, r = 0;
	int ans = 0;


	for (r = 0; r < n; r++) {
		s.insert(a[r]);
		while (s.size() >= 2 && *s.rbegin() - *s.begin() > k) {
			auto it = s.find(a[l]);
			s.erase(it);
			l++;
		}
		ans += r - l + 1;
	}
	cout << ans << endl;
}