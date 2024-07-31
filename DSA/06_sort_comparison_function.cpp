
// sort, 

#include<iostream>
#include<algorithm>
#include<vector>


using namespace std;

using ll = long long;

//sort tang dan
//sort(a, a + n) => [0,n-1]
//sort(a + x, a + y + 1)
//sort(v.begin(), v.end())
//sort(a.begin() + x, a.begin() + y + 1)

//sort giam dan
//sort(a, a + n, greater<int>());

//comparison function, la tham so thu 3 trong ham sort(), vi du: greater<int>()
//a va b la cac cap phan tu trong mang, a dung truoc, b dung sau
//true: a va b dung thu tu ban can sap xep
//false: a va b dang sai thu tu ban can sap xep

//stable: on dinh
//Neu cac phan tu co cung tieu chi sap xep, GIU DUOC THU TU BAN DAU CUA CHUNG, thang nao xuat hien truoc thi in ra truoc
//merge sort, insertion sort, bubble sort
//Dung ham stable_sort() thay vi sort() de co tinh on dinh (stable_sort su dung thuat toan merge sort)

//Sap xep cac phan tu trong mang theo thu tu tong chu so tang dan
//Neu tong chu so bang nhau thi sap xep theo gia tri tang dan

int tong(int a) {
	int ans = 0;
	while (a) {
		ans += a % 10;
		a /= 10;
	}
	return ans;
}

bool cmp(int a, int b) {
	if (tong(a) != tong(b)) {
		return tong(a) < tong(b);
	}
	else {
		return a < b;
	}
}
 
int main() {
	int n; cin >> n;
	int a[100];

	vector<int> b;

	for (int i = 0;  i < n; i++) {
		cin >> a[i]; 
	}
	stable_sort(a, a + n, cmp);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}