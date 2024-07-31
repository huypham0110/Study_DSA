// Bai tap vector

#include <iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> v;
	int TC; cin >> TC;
	while (TC--) {
		int tt; cin >> tt;
		if (tt == 1) {
			int tmp; cin >> tmp;
			v.push_back(tmp);
		}
		else if (tt == 2) {
			if (v.empty()) continue;
			else v.pop_back();
		}
	}
	if (v.empty()) cout << "EMPTY" << endl;
	else {
		for (int x : v) cout << x << ' ';
	}
}
