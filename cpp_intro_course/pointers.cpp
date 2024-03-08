#include <iostream>

using namespace std;

int main(){
   int x = 10;
   int *p;
   p = &x;

   cout << "Value of x is " << x << endl;
   cout << "Address of x is " << &x << endl;
   cout << "Address stored in p is " << p << endl;
   cout << "Value of *p variable is " << *p << endl;
   return 0;
}