#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main()
{
    ofstream myfile;
    myfile.open ("square_numbers.txt");
    for(int i = 2; i < 10; i++){
        myfile << pow(i,2) << endl;
    }
    myfile.close();

    return 0;
}