#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL,"Turkish");
    int ay, yil;
    char devam;

    do {
        cout << "Bir ay numarası girin (1-12 arasi): ";
        cin >> ay;

        switch (ay)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                cout << ay << ". ay 31 gün içermektedir." << endl;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                cout << ay << ". ay 30 gün içermektedir." << endl;
                break;
            case 2:
                cout << "Bir yıl girin: ";
                cin >> yil;

                if ((yil % 4 == 0 && yil % 100 != 0) || yil % 400 == 0) //Artık Yıl kuralı
                {
                    cout << ay << ". ay 29 gün içermektedir. (Artık yıl)" << endl;
                }
                else
                {
                    cout << ay << ". ay 28 gün içermektedir. (Normal yıl)" << endl;
                }
                break;
            default:
                cout << "Geçersiz ay girdiniz." << endl;
                break;
        }

        do
        {
            cout << "Devam etmek için E/e, Çıkmak için H/h girin: ";
            cin >> devam;
            if (devam != 'E' && devam != 'e' && devam != 'H' && devam != 'h') {
                cout << "Geçersiz bir karakter girdiniz. Tekrar deneyin." << endl;
            }
        } while (devam != 'E' && devam != 'e' && devam != 'H' && devam != 'h');

    } while (devam == 'E' || devam == 'e');
    return 0;
}
