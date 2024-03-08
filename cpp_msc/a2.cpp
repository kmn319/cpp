#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>
#include <map>
#include <set>

using namespace std;

int main()
{
	// SECTION A2
	//Consider the following integers : 9, 8, 7, 6, 5, 4, 3, 2, 1, 0. 
	//Use a container defined in the Standard Template Library to store these numbers.
	//Write a single function that : removes all even numbers, sorts the numbers in the container into ascending order, and displays the numbers to screen.
	//Choose an appropriate container to perform these operations.

		vector<int> numbers = { 9, 8, 7,6, 5, 4, 3, 2, 1, 0 }; //create vector
		for (int i = 0; i < numbers.size();)
		{
			if (numbers[i] % 2 == 0 && numbers[i] != 0)
			{
				numbers.erase(numbers.begin() + i); //delete entry
			}
			else i++; //handle for loop progression
		}
		sort(numbers.begin(), numbers.end());//could be implemented with a function you create instead

		//output to screen
		for (int i = 0; i < numbers.size();i++)
		{
			cout << numbers[i] << " ";
		}
		cout << endl;
        return 0;

}