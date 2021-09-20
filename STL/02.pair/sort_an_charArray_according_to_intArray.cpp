/*
	asked by: amazon, microsoft
	
	I/p: a[] = [3, 1, 4]
		 b[] = ['X', 'E', 'C']
	O/p: b[] = ['E', 'X', 'C']
*/

/*
	approach:
		1. sort array of pair

*/
#include<bits/stdc++.h>
using namespace std;

void sort_pair(pair(int a[], char b[], int n)) {
	pair<int, char> pa[n];

	// create a new (int, char) pair
	for (int i = 0; i < n; i++) {
		pa[i] = {a[i], b[i]};
	}

	sort(pa, pa + n);

	// print second element from new pair
	for (int i = 0; i < n; i++) {
		cout << pa[i].second << endl;
	}
}

/*
	Time complexity:
		1. coping elemnts of a[] and b[] into a pair array it takes O(n).
		2. sort function takes O(nlogn).
		3. printing second element of pair array take O(n).
		4. overall time complexity will be: O(nlogn).
	Space complexity:
		1. using an array of pairs takes O(n).
*/

int main() {


	return 0;
}
