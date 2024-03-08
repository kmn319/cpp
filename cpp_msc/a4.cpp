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
	//Write declarations for the following : a pointer to 
	//1.a character, 
	//2.an array of 10 integers, 
	//3.a reference to an array of 10 integers, 
	//4.a pointer to an array of character strings, 
	//5.a pointer to a pointer to a character, 
	//6.a constant integer, 
	//7.a pointer to a constant integer, 
	//8.and a constant pointer to an integer.
	//Initialize each one.

	//1.
	char* char_ptr;
	char_ptr = new char{'c'};
	cout << "\n" << *char_ptr;

	//2. We did 3 here instead
	int* int_array_ptr;
	int_array_ptr = new int[3]{1,5,7};
	cout << "\n";
	for (int i = 0; i < 3; i++)
	{
		cout << " " << int_array_ptr[i];
	}

	//3. We did 3 here instead
	int array[3] = { 3,6,9 };
	int * int_array_ref = &array[0];
	for (int i = 0; i < 3; i++)
	{
		cout << " " << int_array_ref[i];
	}

	//4.
	string* char_string_ptr;
	char_string_ptr = new string[3]{ "hi", "hello", "hey" };
	cout << "\n";
	for (int i = 0; i < 3; i++)
	{
		cout << " " << char_string_ptr[i];
	}

	//5.
	char** char_ptr_2;
	char* char_ptr_1;
	char_ptr_1 = new char{'d'};
	char_ptr_2 = &char_ptr_1;

	cout << "\ndouble pointer for char (no derefernce) 5 " << char_ptr_2;
	cout << "\ndouble pointer for char (dereferenced once) 5 " << *char_ptr_2;
	cout << "\ndouble pointer for char (dereferenced twice) 5 " << **char_ptr_2;
	cout << endl;
	
	//6.
	const int int_const = 5.;

	//7
	int  const* ptr_to_const_int;
	ptr_to_const_int = new int const{ 4 };
	cout << "\n int const pointer 7 " << ptr_to_const_int;
	cout << "\nint const pointer dereferenced: 7 " << *ptr_to_const_int;

	//8
	int* const int_const_ptr = new int{ 9 };
	cout << "\nconst int pointer 8 " << int_const_ptr;
	cout << "\nconst int pointer dereferenced: 8 " << *int_const_ptr;
	cout << endl;

	// delete memory - dont forgent this step
	delete char_ptr;
	delete[] int_array_ptr;
	delete[] char_string_ptr;
	delete char_ptr_2;
	delete char_ptr_1;
	delete ptr_to_const_int;
	delete int_const_ptr;

    return 0;
}