#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL,"Turkish");
    int yas, ucret;

    cout << "Yaşınızı giriniz: ";
    cin >> yas;

    switch (yas)
    {
        case 0 ... 17: // 0 ile 17 arasındaki yaşların ödemesi gereken
            ucret = 15;
        break;

        case 18 ... 64: // 18 ile 64 arasındaki yaşların ödemesi gereken
            ucret = 20;
        break;

        default: // 65 ve üstü yaşların ödemesi gereken
            ucret = 10;
    }
    cout << "Ödemeniz gereken tutar: " << ucret << " TL" << endl;
    return 0;
}
