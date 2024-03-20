#include <iostream>

using namespace std;

int globalVariable = 35;

int main() {
    int localVariable = 55;

    cout << "  Value of a global variable: " << globalVariable << endl;

    cout << " Value of a local variable: " << localVariable << endl;
   
    return 0;
}