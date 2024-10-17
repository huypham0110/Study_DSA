#include<iostream>
#include<algorithm>
#include<string>
#include<iomanip>
#include<sstream>
#include<vector>
#include<set>

using namespace std;

// Co the khai bao mang tu i=1;i<=n;i++ va j=1;j<=m;j++
// Cho truoc cac gia tri o hang 0, cot 0 deu bang 0

int main() {

	int n; int m; cin >> n >> m;
	int a[100][100] = {};
	long long pref[100][100] = {};

	for (int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}

	//Tinh mang pref[]
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			pref[i][j] = pref[i - 1][j] + pref[i][j - 1] - pref[i - 1][j - 1] + a[i][j];
			cout << pref[i][j] << ' ';
		}
		cout << endl;
	}

	int q; cin >> q;
	while (q--) {
		int x1, x2, y1, y2; 
		cin >> x1 >> x2 >> y1 >> y2;
		cout << pref[x2][y2] - pref[x1 - 1][y2] - pref[x2][y1 - 1] + pref[x1 - 1][y1 - 1] << endl;
	}
}



/*
int main() {

	int n; int m; cin >> n >> m;
	int a[100][100];
	long long pref[100][100];

	for (int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}

	//Tinh mang pref[]
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i == 0 && j == 0) {
				pref[i][j] = a[i][j];
			}
			else if (i == 0) {
				pref[i][j] = pref[i][j - 1] + a[i][j];
			}
			else if (j == 0) {
				pref[i][j] = pref[i - 1][j] + a[i][j];
			}
			else {
				pref[i][j] = pref[i - 1][j] + pref[i][j - 1] - pref[i - 1][j - 1] + a[i][j];
			}
			cout << pref[i][j] << ' ';
		}
		cout << endl;
	}

	int q; cin >> q;
	while (q--) {
		int x1, x2, y1, y2;
		cin >> x1 >> x2 >> y1 >> y2;
		x1--; x2--; y1--; y2--;

		if (x1 == 0 && y1 == 0){
			cout << pref[x2][y2] << endl;
		}
		else if (x1 == 0) {
			cout << pref[x2][y2] - pref[y1 - 1][x2] << endl;
		}
		else if (y1 == 0) {
			cout << pref[x2][y2] - pref[x1 - 1][y2] << endl;
		}
		else {
			cout << pref[x2][y2] - pref[x1 - 1][y2] - pref[x2][y1 - 1] + pref[x1 - 1][y1 - 1] << endl;
		}
	}
}*/

