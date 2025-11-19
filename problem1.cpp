#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "You entered: " << num << endl;
    cout << "Address of the variable is: " << &num << endl;

    return 0;
}
