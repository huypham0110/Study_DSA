#include<iostream>
#include<algorithm>
#include<string>
#include<iomanip>
#include<sstream>
#include<vector>
#include<set>

using namespace std;

//Bai toan: Number of equal.
//Tim so luong cap (i,j) sao cho a[i] = b[j]

//Input: Hai day tang dan
//8 7
//1 1 3 3 3 5 8 8
//1 3 3 4 5 5 5

//Output:
//11

//Cac buoc lam:
//

int main() {
	int n, m; cin >> n >> m;
	int a[100], b[100];
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < m; i++) cin >> b[i];

	// Cach cua HUY
	/*int i = 0, j = 0;
	int cnt = 0;
	int ans = 0;
	while (i < n && j < m) {
		
		if (a[i] < b[j]) {
			++i;
			continue;
		}

		if (a[i] == b[j]) {
			cnt++;
			i++;
		}
		else {
			j++;
			if (b[j - 1] == b[j]) {
				ans += cnt;
			}
			else {
				ans += cnt;
				cnt = 0;
			}
			
		}
	}
	cout << ans + cnt << endl;*/
	

	// Cach cua 28tech
	int i = 0, j = 0;
	int ans = 0;
	while (i < n && j < m) {
		if (a[i] < b[j]) {
			++i;
			continue;
		}
		if (a[i] > b[j]) {
			++j;
			continue;
		}
		int dem1 = 0;
		int dem2 = 0;
		while (a[i] == b[j] && i < n) {
			++dem1;
			++i;
		}
		int tmp = a[i - 1];
		while (tmp == b[j] && j < m) {
			++dem2;
			++j;
		}
		ans += dem1 * dem2;
	}
	cout << ans << endl;
}