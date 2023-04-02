#include <iostream>
using namespace std;
int main()
{
int sayi;
cout << "Sayi giriniz: ";
cin >> sayi;
if (sayi<0)
    cout << "Negatif sayi girdiniz.";
else if(sayi >= 0)
    {
    if(sayi%3 == 0)
        cout << "Sayi 3 ile tam bolunur.";
    else
        cout << "Sayi 3 ile tam bolunemez.";
    }
    return 0;
}
