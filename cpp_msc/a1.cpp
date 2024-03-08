#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
	// SECTION A1 - inefficient -using vector
	vector<string> towns = { "Tokyo", "Berlin", "Rio", "Denver", "Helsinki", "Nairobi" };
	sort(towns.begin(), towns.end());
	for (vector<string>::iterator it = towns.begin(); it != towns.end(); it++)
		cout << *it << " ";

	cout << endl;

	// Alternative - using 
	// create an ordered set of string
	set<string> towns_set = { "Tokyo", "Berlin", "Rio", "Denver", "Helsinki", "Nairobi" };
	for (auto it = towns_set.begin(); it != towns_set.end(); it++)
		cout << *it << " ";
	return 0;
}

