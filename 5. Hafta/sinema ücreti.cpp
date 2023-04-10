#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL,"Turkish");
    int yas, ucret;

    cout << "Yaşınızı giriniz: ";
    cin >> yas;

    if (yas < 18)
    {
        ucret = 15;
    }
    else if (yas >= 65)
    {
        ucret = 10;
    }
    else
    {
        ucret = 20;
    }

    cout << "Ödemeniz gereken tutar: " << ucret << " TL" << endl;

    return 0;
}
