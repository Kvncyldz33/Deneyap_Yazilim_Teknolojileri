#include <iostream>
using namespace std;
int main()
{
    int dizi[] = {12, 67, 78, 45, 78, 78, 32, 16, 16, 57};
    int i, j, n = 10;
    cout << "Dizi: ";
    for(i = 0; i < n; i++)
        cout << dizi[i] << " ";

    cout  << "\nElemanlar: ";
    for(i = 0; i < n-1; i++)
        if(dizi[i] == dizi[i+1])
            cout <<  dizi[i] << " ";
    return 0;
}
