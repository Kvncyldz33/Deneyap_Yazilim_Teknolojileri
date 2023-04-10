#include <iostream>
#include <cmath> // �s alma i�lemi i�in gerekli k�t�phane
#include <locale> // setlocale() i�in gerekli k�t�phane

using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish"); // T�rk�e mesaj yazmak i�in
    double sayi1, sayi2, sonuc;
    char islem;

    cout << "��lem yapmak istedi�iniz iki say�y� ve i�lemi girin. (Fakt�riyel '!' i�in ilk say� dikkate al�n�r.) (�rn: 5 3 *): ";
    cin >> sayi1 >> sayi2 >> islem;

    switch (islem)
    {
        case '+': // toplama i�lemi
            sonuc = sayi1 + sayi2;
            cout << "Sonu�: " << sonuc;
            break;
        case '-': // ��karma i�lemi
            sonuc = sayi1 - sayi2;
            cout << "Sonu�: " << sonuc;
            break;
        case '*': // �arpma i�lemi
            sonuc = sayi1 * sayi2;
            cout << "Sonu�: " << sonuc;
            break;
        case '/': // b�lme i�lemi
            if (sayi2 == 0)
            {
                cout << "S�f�ra b�lme hatas�!";
            }
            else
            {
                sonuc = sayi1 / sayi2;
                cout << "Sonu�: " << sonuc;
            }
            break;
        case '^': // �s alma i�lemi
            sonuc = pow(sayi1, sayi2);
            cout << "Sonu�: " << sonuc;
            break;
        case '!': // fakt�riyel alma i�lemi
            sonuc = 1;
            for (int i = 1; i <= sayi1; i++) {
                sonuc *= i;
            }
            cout << "Sonu�: " << sonuc;
            break;
        default:
            cout << "Ge�ersiz i�lem!";
            break;
    }

    return 0;
}
