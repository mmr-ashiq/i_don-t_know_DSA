#include <iostream>
using namespace std;

int main() {
	int a, b, x, y;

	cin >> a >> b >> x >> y;
	int penSum = a * x;
	int pencilSum = b * y;
	int total = penSum + pencilSum;
	cout << total;
	return 0;
}
