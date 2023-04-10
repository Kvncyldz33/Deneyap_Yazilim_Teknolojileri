#include <iostream>
#include <cmath> // üs alma iþlemi için gerekli kütüphane
#include <locale> // setlocale() için gerekli kütüphane

using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish"); // Türkçe mesaj yazmak için
    double sayi1, sayi2, sonuc;
    char islem;

    cout << "Ýþlem yapmak istediðiniz iki sayýyý ve iþlemi girin. (Faktöriyel '!' için ilk sayý dikkate alýnýr.) (Örn: 5 3 *): ";
    cin >> sayi1 >> sayi2 >> islem;

    switch (islem)
    {
        case '+': // toplama iþlemi
            sonuc = sayi1 + sayi2;
            cout << "Sonuç: " << sonuc;
            break;
        case '-': // çýkarma iþlemi
            sonuc = sayi1 - sayi2;
            cout << "Sonuç: " << sonuc;
            break;
        case '*': // çarpma iþlemi
            sonuc = sayi1 * sayi2;
            cout << "Sonuç: " << sonuc;
            break;
        case '/': // bölme iþlemi
            if (sayi2 == 0)
            {
                cout << "Sýfýra bölme hatasý!";
            }
            else
            {
                sonuc = sayi1 / sayi2;
                cout << "Sonuç: " << sonuc;
            }
            break;
        case '^': // üs alma iþlemi
            sonuc = pow(sayi1, sayi2);
            cout << "Sonuç: " << sonuc;
            break;
        case '!': // faktöriyel alma iþlemi
            sonuc = 1;
            for (int i = 1; i <= sayi1; i++) {
                sonuc *= i;
            }
            cout << "Sonuç: " << sonuc;
            break;
        default:
            cout << "Geçersiz iþlem!";
            break;
    }

    return 0;
}
