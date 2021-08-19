#include<bits/stdc++.h>
using namespace std;

int main() {
	pair<int, int>p1(10, 20), p2(10, 11);
	// it will return true only when two pair ar same.
	// ex. p1(10, 20), p2(10,20);

	cout << (p1 == p2) << endl;
	cout << (p1 != p2) << endl;
	// greater and less than operator only check first value
	cout << (p1 > p2) << endl;
	cout << (p1 < p2) << endl;
	return 0;
}