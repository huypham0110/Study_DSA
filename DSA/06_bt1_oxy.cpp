#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

using ll = long long;

//Bai tap sort, xay dung ham comparison function
//Cho mang gom n diem trong he toa do Oxy, sap xep cac diem theo thu tu:
//- Khoang cach ve goc toa do tang dan
//- theo hoanh do tang dan
//- theo tung do tang dan

//input:
//n: so luong diem
//n dong tiep theo moi dong la 2 so nguyen x, y tuong ung hoanh do, tung do


long long khoangCach(pair<ll, ll> a) {
	return sqrt(a.first * a.first + a.second * a.second);
}

bool cmp(pair<ll,ll> a, pair<ll,ll> b) {
	if (khoangCach(a) != khoangCach(b)) {
		return khoangCach(a) < khoangCach(b);
	}
	else if (a.first != b.first) {
		return a.first < b.first;
	}
	else {
		return a.second < b.second;
	}
}

int main() {
	ll n; cin >> n;

	//vector<pair<ll, ll>>v(100);
	pair<ll, ll> p[100];

	for (int i = 0; i < n; i++) {
		cin >> p[i].first >> p[i].second;
	}
	sort(p, p+n, cmp);
	for (int i = 0; i < n; i++) {
		cout << p[i].first << " " << p[i].second << endl;
		//cout << khoangCach(v[i]) << endl;
	}
}