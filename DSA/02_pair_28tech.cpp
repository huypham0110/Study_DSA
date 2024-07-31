

#include <iostream>
#include<vector>

using namespace std;

int main()
{
	pair<int, int> p;
	p = make_pair(10, 20);

	pair<int, int> p1 = { 23,24 };

	cout << p1.first << endl;
	cout << p1.second << endl;
}
