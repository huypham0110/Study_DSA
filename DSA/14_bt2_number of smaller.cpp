#include<iostream>
#include<algorithm>
#include<string>
#include<iomanip>
#include<sstream>
#include<vector>
#include<set>

using namespace std;

//Bai toan: Number of smaller. Voi moi phan tu trong mang hai, tim so luong phan tu o mang thu nhat nho hon no

//Input: Hai day tang dan
//

//Output:
//

//Cac buoc lam:
//

int main() {
	int n, m; cin >> n >> m;
	int a[100], b[100];
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < m; i++) cin >> b[i];

	int i = 0, j = 0;

	while (i < n && j < m) {
		if (a[i] < b[j]) {
			i++;
		}
		else {
			cout << i << ' ';
			j++;
		}
	}
	while (j < m) {
		cout << n << ' ';
		j++;
	}
}