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
	/*Write a function that takes in an integer and then reverses the order of the digits in the integer.
	For instance, changes “12345678” to “87654321”.
	The main section of the program should allow the user to enter an integer, it should then call the function to reverse the integer’s orderand display the resultant integer.*/

    int input;

    cout << "Enter a number and it will be reversed" << endl;

    cin >> input;

	string input_str = to_string(input);
	string output;// = input_str.substr(input_str.size() - 1);

	for (auto it = input_str.rbegin(); it!=input_str.rend(); it++)
	{
		output += *it;
	}

	cout << "Reversed int is " << output << endl;
    return 0;
}