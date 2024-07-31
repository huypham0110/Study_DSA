#include<iostream>
#include<algorithm>
#include<string>
#include<iomanip>
#include<sstream>
#include<vector>
#include<set>

using namespace std;

//Tim xem co bao nhieu MAX trong mang
//Biet MAX duoc xac dinh khi xet 1 pham vi xung quanh no, no lon nhat

int dx[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int dy[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };

int main() {

	int n; int m; cin >> n >> m;
	int a[100][100];
	long long pref[100][100];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}

	int dem = 0;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			bool check = true;
			for (int k = 0; k < 8; k++) {
				int i1 = i + dx[k];
				int j1 = j + dx[k];
				if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m) {
					if (a[i1][j1] >= a[i][j]) {
						check = false;
						break;
					}
				}
			}
			if (check) dem++;
		}
	}
	cout << dem << endl;
}