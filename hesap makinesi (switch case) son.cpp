#include <iostream>
#include <locale> // setlocale() i�in gerekli k�t�phane

using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish"); // T�rk�e mesaj yazmak i�in
    double sayi1, sayi2, sonuc;
    char islem;

    cout << "�lk say�y� girin: ";
    cin >> sayi1;
    cout << "�kinci say�y� girin: ";
    cin >> sayi2;
    cout << "��lemi girin (+, -, *, /): ";
    cin >> islem;

    switch (islem)
    {
        case '+': // toplama i�lemi
            sonuc = sayi1 + sayi2;
            cout << sayi1 << "+" << sayi2 << " = " << sonuc;
            break;
        case '-': // ��karma i�lemi
            sonuc = sayi1 - sayi2;
            cout << sayi1 << "-" << sayi2 << " = " << sonuc;
            break;
        case '*': // �arpma i�lemi
            sonuc = sayi1 * sayi2;
            cout << sayi1 << "*" << sayi2 << " = " << sonuc;
            break;
            case '/': // b�lme i�lemi
                if (sayi2 == 0) {
                    cout << "S�f�ra b�lme hatas�!";
                } else {
                    sonuc = sayi1 / sayi2;
                    cout << sayi1 << "/" << sayi2 << " = " << sonuc;
                }
            break;
        default: // ge�ersiz i�lem
            cout << "Ge�ersiz i�lem!";
            break;
    }

    return 0;
}
