#include<bits/stdc++.h>
using namespace std;

int main() {
	// Declare a vector
	// vector<int> arr;

	// intialize a vector
	// vector<int> arr = {1, 2, 10, 12, 16};

	// intialization with Fill constrctor
	vector<int> arr(10, 6);

	// pop_back -remove an element O(1)
	arr.pop_back();

	// push_back -insert an element O(1)
	arr.push_back(18);

	// print all elements
	/*for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << endl;
	}*/

	for (int x : arr) {
		cout << x << endl;
	}

	// size of a vector (no. of elements)
	cout << arr.size() << endl;

	//capacity of the vector (how much actual memory allocated)
	cout << arr.capacity() << endl;
	// when vector was inilized the capacity is going to remain same



	return 0;
}