#include<iostream>
#include<algorithm>
#include<string>
#include<iomanip>
#include<sstream>
#include<vector>
#include<set>

using namespace std;

//Cho ma tran gom N hang va M cot chi bao gom ca so 0 va 1.
//Dem so luong mien cac so 1 trong ma tran, cac o so 1 duoc coi la cung mien neu chung co chung canh

int dx[4] = { -1, 0, 0, 1 };
int dy[4] = { 0, -1, 1, 0 };

int a[100][100];
int n, m;

void nhap(){
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
}

void loang(int i, int j) {
	cout << "Duyet qua o" << i << ' ' << j << endl;
	a[i][j] = 0;
	for (int k = 0; k < 4; k++) {
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m) {
			if (a[i1][j1] == 1) {
				loang(i1, j1);
			}
		}
	}
}

int main() {

	nhap();

	int dem = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] == 1) {
				dem++;
				loang(i, j);
				cout << endl;
			}
		}
	}
	cout << dem << endl;
}