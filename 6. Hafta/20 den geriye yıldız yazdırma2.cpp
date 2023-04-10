#include <iostream>
//#include <stdio.h>

using namespace std;

int main() {
    for(int i = 20; i >= 1; i--)
        {
        for(int j = 1; j <= i; j++)
            {
            cout << "*";
            }
        cout << "\n"; // cout << endl;
        }
    return 0;
}
