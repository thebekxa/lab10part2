#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter the numbers: ";
    cin >> a;
    cin >> b;
    int* ptrA;
    int* ptrB;
    ptrA = &a;
    ptrB = &b;
    int valueA = *ptrA;
    int valueB = *ptrB;
    *ptrA * *ptrB;
    cout << "the product is: " << valueA * valueB;
    return 0;
}
