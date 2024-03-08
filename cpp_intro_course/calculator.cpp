#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;
    int a = 3;
    int b = 2;
    cout << "Enter a number" << endl;
    cin >> x;
    cout << "That number squared is " << pow(x,2) << endl;
    cout << "The square root of that number is " << sqrt(x) << endl;
    cout << "The sin of that number is " << sin(x) << endl;
    cout << "a/b is " << (double)a / b << endl;
    return 0;
}