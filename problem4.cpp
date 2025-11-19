#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int* ptr;
    ptr = &num;
    cout << *ptr << endl;
    return 0;
}
