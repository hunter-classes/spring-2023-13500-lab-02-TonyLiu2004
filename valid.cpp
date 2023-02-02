#include <iostream>
using namespace std;
int main(){
    int num = -1;
    cout << "Enter an integer between 0 and 100: ";
    cin >> num;
    while( !((num>0) && (num < 100))){
        cout << "Re-enter an integer between 0 and 100: ";
        cin >> num;
    }
    cout << "Number squared is " << num*num << endl;
    return 0;
}