#include "header.h"

int main(){
    int input;
    cout << "Enter an integer:\n";
    cin >> input;
    if (input % 2 == 0)
        cout << "The number " << input << " is even.\n";
    else
        cout << "The number " << input << " is odd.\n";
    return 0;
}