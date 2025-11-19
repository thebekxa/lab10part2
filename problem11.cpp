#include <iostream>
using namespace std;
int main()
{
    int *p1, *p2, *p3, k, l, sum = 0;
    do {
        cout <<"Enter first value: ";
        cin >> k;
        cout <<"Enter second value: ";
        cin >> l;

    }while (k>l  k>100  l>100);
    p1=&k;
    p2=&l;
    p3=&sum;

    for (int i=*p1 + 1; i<*p2; i++) {
        *p3 += i;
    }

    cout << "Sum of values: " << *p3 << endl;

    }
