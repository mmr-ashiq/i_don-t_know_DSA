/*
		--google interview--

	given an array containing N integers, and an number S denoting a target sum.

	Find two distinct integers that can pair up to form target sum. let us assume there will be only on such pair.

	input:
	array = [10,5,2,3,-6,9,11]
	s = 4

	output:
	[10,-6 ]

*/

#include<bits/stdc++.h>
using namespace std;

vector<int> pairSum(vector<int> arr, int Sum) {
	// logic
	unordered_set<int> s;
	vector<int> result;

	for(int i=0; i<arr.size(); i++){
		int x = Sum - arr[i];
		if(s.find(x)!=s.end()){
			result.push_back(x);
			result.push_back(arr[i]);
			return result;
		}

		// insert the current no inside set
		s.insert(arr[i]);
	}
	return {};
}

int main() {

	// my first solution
	/*
	int array[] = {12, 5, 2, 3, -8, 9, 11};
	int s = 4;

	int arrSize = sizeof(array) / sizeof(array[0]);

	for (int i = 0; i < arrSize; ++i) {
		for (int j = 1; j < arrSize; j++) {
			if ((array[i] == array[j]) && (array[i] + array[j] == 4)) {
				break;
			}
			else if (array[i] + array[j] == 4) {
				cout << array[i] << " " << array[j] << endl;
				break;
			}
		}
	}*/

	// actual solution (unorder set)

	vector<int> arr{10, 5, 2, 3, -6, 9, 11};
	int s = 4;

	auto p = pairSum(arr, s);
	if (p.size() == 0) {
		cout << "No such pair" << endl;
	} else {
		cout << p[0] << "," << p[1] << endl;
	}

	return 0;
}

/*
	1. Brute force: O(n^2)

	2. sort --> binary search: NlogN + NlogN = O(NlogN)

	3. unordered set: O(n)
*/