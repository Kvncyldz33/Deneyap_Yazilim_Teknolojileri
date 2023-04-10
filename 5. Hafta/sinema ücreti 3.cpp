#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL,"Turkish");
    int yas, ucret;

    cout << "Yaþýnýzý giriniz: ";
    cin >> yas;

    if (yas >= 0 && yas <= 17)
        {
        ucret = 15;
        }
    else if (yas >= 18 && yas <= 64)
        {
            ucret = 20;
        }
    else
        {
            ucret = 10;
        }
    cout << "Ödemeniz gereken tutar: " << ucret << " TL" << endl;
    return 0;
}


/*
ucret deðiþkeni kullanmayarak her blok arasýnda cout ile direk mesaj da yazabilirdik. Örn: cout << "Ödemeniz gereken tutar: 20 TL"<< endl;
4. örnekte kodlarını görebilirsiniz.
*/
