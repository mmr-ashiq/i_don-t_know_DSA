#include<bits/stdc++.h>
using namespace std;

template <typename T>
T maxNumber(T x, T y) {
	return (x > y) ? x : y;
}

int32_t main()
{

	cout << maxNumber<int>(4, 5) << endl;
	cout << maxNumber<char>('a', 'b') << endl;
	cout << maxNumber<string>("lol", "lolo") << endl;

	return 0;
}