#include<iostream>
#include<algorithm>
#include<string>
#include<iomanip>
#include<sstream>
#include<vector>
#include<set>

using namespace std;

//Bai toan: Tren tuyen duong co N chiec den, co B chiec den bi hong
//De khac phuc su co, chinh quyen da sua mot so den bi hong, sao cho co it nhat 1 khu vuc co K chiec den lien tieps hoat dong
//Xac dinh so den can phai sua it nhat


//Input:
//Nhap N, K, B
//B dong tiep theo, moi dong chua vi tri cua mot chiec den bi hong

//Output:
//

//Cac buoc lam:
//Tao mot cua so kich co K, xem cua so nao co so den hong it nhat


int main() {
	int n; cin >> n;
	int k; cin >> k;
	int b; cin >> b;
	int a[1001] = { 0 };

	for (int i = 0; i < b; i++) {
		int tmp;
		cin >> tmp; 
		a[tmp - 1] = 1; // den bi hong
	}

	int cnt = 0;
	for (int i = 0; i < k; i++) {
		if (a[i] == 1) cnt++;
	}

	int ans = cnt;
	for (int i = k; i < n; i++) {
		if (a[i - k] == 1) cnt--;
		if (a[i] == 1) cnt++;
		ans = min(ans, cnt);
	}

	cout << ans << endl;

}