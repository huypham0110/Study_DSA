

// Cho mang co n phan tu va so nguyen k (1<k<=n). 
// Doi voi moi day con lien tiep co chieu dai k, in ra phan tu lon nhat trong day con do
//
// input:
//10 3
//1 2 3 1 4 5 1 8 9 10
//
// output:
// 3 3 4 5 5 8 9 10



#include <iostream>
#include<set>

using namespace std;

int main()
{
	// Khai bao
	multiset<int> mse;
	int n; cin >> n;
	int k; cin >> k;
	int a[100];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < k; i++) {
		mse.insert(a[i]);
	}

	for (int i = k; i < n; i++) {
		cout << *mse.rbegin() << ' ';
		auto it = mse.find(a[i - k]);
		mse.erase(it);
		mse.insert(a[i]);
	}

	cout << *mse.rbegin() << ' ';
	
}
