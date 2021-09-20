#include<bits/stdc++.h>
using namespace std;

int32_t main(){

	// declare a vector
	// vector<int> v;

	// declare and initialization of vector
	vector<int> v = {10, 8, 3, 15, 20, 9, 30, 5};

	// printing vector
	for (int x: v){
		cout<<x<<" ";
	}

	/*
		an iterator gives you address of an element in a container.
	*/
	// vector<int> :: iterator i = v.begin();

	auto i = v.begin();
	cout << (*i) << endl;

	i++;
	cout << *i << endl;

	i = next(i);
	cout << *i << endl;

	i = next(i, 2);
	cout << *i << endl;

	i = prev(i);
	cout << *i << endl;

	i = prev(i, 2);
	cout << *i << endl;

	// advance(iterator, nth) function pass the iterator nth position ahead
	advance(i, 3);
	cout << *i << endl;
	
	return 0;
}