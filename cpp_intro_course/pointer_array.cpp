#include <iostream>

using namespace std;

int main(){

    int primes[3] = {34, 12,5};
    int *p = primes;

    

    for(int i=0; i<3; ++i){
        cout << " Address of primes["<< i <<"] is " << p << endl;
        cout << " Value of primes["<< i <<"] is " << *p << endl;
        ++p;
    }

    return 0;

}