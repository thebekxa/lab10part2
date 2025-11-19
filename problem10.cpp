#include <iostream>
using namespace std;
int main() {
  int temp[31];
    cout << "Enter 31 temp values: ";
    for (int i = 0; i < 31; i++)
        cin >> temp[i];

    int x;
    cout << "Enter comparison temp:";
    cin >> x;

    int *ptr = temp;

    for (int i=0; i<31; i++) {
        if (*(ptr+i)<x) {
            cout << "First day with temp " << x << "is day: " << i+1 << endl;
            break;
        }
    }

    return 0;
}
