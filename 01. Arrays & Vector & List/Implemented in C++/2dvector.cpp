#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	// intilize 2d vector
	vector< vector<int> > arr = {
		{1, 2, 3},
		{4, 5},
		{6, 7, 8, 9}
	};

	arr[0][0] += 10; // update

	// print all the elements
	for (int i = 0; i < arr.size(); i++) {
		// arr.size(): gives number of rows

		for (int number : arr[i]) {
			cout << number <<",";
		}
		cout << endl;

	}

	return 0;
}