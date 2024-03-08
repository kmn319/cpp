#include <iostream>
#include <armadillo>

using namespace std;
using namespace arma;

int main()
{
    mat A = mat("1 0 5; 2 1 6; 3 4 0");
    mat b = mat("-1; 0; 1");
    mat x;

    x = solve(A,b);

    cout << x << endl;

    return 0;
}