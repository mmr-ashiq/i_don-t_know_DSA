#include<bits/stdc++.h>
using namespace std;

int main() {
	pair<int, int>p1(10, 20);
	pair<int, string>p2(1, "checking pair stl");
	// if we don't intialize pair default constructor value will placed(0,0)
	pair <int, bool>p3;
	// p3 = {2, true};
	p3 = make_pair(2, true);
	// make_pair function kind of redundant. we should aboid this. 


	cout << p1.first << " " << p1.second << endl;
	cout << p2.first << " " << p2.second << endl;
	cout << p3.first << " " << p3.second << endl;

	return 0;
}