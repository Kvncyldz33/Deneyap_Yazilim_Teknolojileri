#include <iostream>
using namespace std;
int main()
{
    const int DOGUM_YILI = 2005;
    int boy = 175, kilo=72;

    cout << "Dogum yilim: " << DOGUM_YILI << endl;
    cout << "Boyum: " << boy << endl;
    cout << "Kilom: " << kilo << endl;

    return(0);
}

/* Sabitleri ay�rmak i�in a�a��daki �� kural:
1) �const� anahtar s�zc���n� kullanarak tan�mlar�z.
2) Sabit adlar�, de�i�ken adlar�ndan ay�rt etmek i�in b�y�k harfle yaz�l�r.
3) Sabitler her zaman tan�mlama s�ras�nda de�erlerini almal�d�r. */
