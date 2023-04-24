#include <iostream>
using namespace std;
int main()
{
    int yaslar[5] = {15, 14, 17, 12, 16};
    int i;
    for(i=0; i<5; i++)
    {
        cout << i+1 <<". arkadasimin yasi: " << yaslar[i] << endl;
    }
    return 0;
}
