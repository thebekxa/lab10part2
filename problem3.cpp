#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a;
    cin >> b;
    int *ptrA;
    int *ptrB;
    ptrA = &a;
    ptrB = &b;
    cout << "Value of ptrA: " << *ptrA << endl;
    cout << "Value of ptrB: " << *ptrB << endl;
    return 0;
}
