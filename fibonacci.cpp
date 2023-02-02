#include <iostream>
using namespace std;
int main(){
    int fib[60];
    fib[0] = 0;
    fib[1] = 1;
    int len = sizeof(fib)/sizeof(fib[0]);
    cout << fib[0] << endl << fib[1] << endl;
    for (int i = 2;i < len;i++){
        fib[i] = fib[i-1] + fib[i-2];
        cout << fib[i] << endl; 
    }
    return 0;
}