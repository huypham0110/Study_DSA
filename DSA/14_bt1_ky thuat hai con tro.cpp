#include<iostream>
#include<algorithm>
#include<string>
#include<iomanip>
#include<sstream>
#include<vector>
#include<set>

using namespace std;

//Bai toan: Merging arrays (Gop hai mang) 

//Input:
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
		if (a[i] <= b[j]) {
			cout << a[i] << ' ';
			i++;
		}
		else {
			cout << b[j] << ' ';
			j++;
		}
	}
	while (i < n) {
		cout << a[i] << ' ';
		i++;
	}
	while (j < m) {
		cout << b[j] << ' ';
		j++;
	}
}