#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Please enter three numbers: ";
    cin >> a >> b >> c;
    int* ptrA;
    int* ptrB;
    int* ptrC;
    ptrA = &a;
    ptrB = &b;
    ptrC = &c;
    int *valueA = &a;
    int *valueB = &b;
    int *valueC = &c;
    if (*ptrA > *ptrB && *ptrA > *ptrC) {
        cout << *ptrA << " is the greatest";
    }
    else if (*ptrB > *ptrA && *ptrB > *ptrC) {
        cout << *ptrB << " is the greatest";
    }
    else {
        cout << *ptrC << " is the greatest";
    }
    return 0;
}
