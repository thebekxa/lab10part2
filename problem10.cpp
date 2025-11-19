#include <iostream>
using namespace std;
int main() {
    int temp[31];
    cout<<"Enter days"<<endl;
    for (int i = 0; i < 31; i++) {
        cin>>temp[i];
    }
    int x;
    cout<<"Enter comparison temperature: ";
    cin>>x;
    for (int i = 0; i < 31; i++) {
        if (temp[i] < x) {
            cout << "First day with tem:"<< x<<"is the day:"<<i+1<<endl;
        }
    }
    return 0;
}
