#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL,"Turkish");
    int yas, ucret;

    cout << "Yaşınızı giriniz: ";
    cin >> yas;

    if (yas >= 0 && yas <= 17)
        {
        cout << "Ödemeniz gereken tutar: 15 TL"<< endl;
        }
    else if (yas >= 18 && yas <= 64)
        {
            cout << "Ödemeniz gereken tutar: 20 TL"<< endl;
        }
    else
        {
            cout << "Ödemeniz gereken tutar: 10 TL"<< endl;
        }
    return 0;
}
