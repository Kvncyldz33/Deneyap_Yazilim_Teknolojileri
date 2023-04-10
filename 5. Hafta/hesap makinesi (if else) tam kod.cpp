#include <iostream>
#include <cmath> // üs alma iþlemi için gerekli kütüphane
#include <locale> // setlocale() için gerekli kütüphane

using namespace std;

int main() {
    setlocale(LC_ALL, "Turkish"); // Türkçe mesaj yazmak için
    double sayi1, sayi2, sonuc;
    char islem;

    cout << "Ýþlem yapmak istediðiniz iki sayýyý ve iþlemi girin: ";
    cin >> sayi1 >> sayi2 >> islem;

    if (islem == '+') { // toplama iþlemi
        sonuc = sayi1 + sayi2;
        cout << "Sonuç: " << sonuc;
    } else if (islem == '-') { // çýkarma iþlemi
        sonuc = sayi1 - sayi2;
        cout << "Sonuç: " << sonuc;
    } else if (islem == '*') { // çarpma iþlemi
        sonuc = sayi1 * sayi2;
        cout << "Sonuç: " << sonuc;
    } else if (islem == '/') { // bölme iþlemi
        if (sayi2 == 0) {
            cout << "Sýfýra bölme hatasý!";
        } else {
            sonuc = sayi1 / sayi2;
            cout << "Sonuç: " << sonuc;
        }
    } else if (islem == '^') { // üs alma iþlemi
        sonuc = pow(sayi1, sayi2);
        cout << "Sonuç: " << sonuc;
    } else if (islem == '!') { // faktöriyel alma iþlemi
        sonuc = 1;
        for (int i = 1; i <= sayi1; i++) {
            sonuc *= i;
        }
        cout << "Sonuç: " << sonuc;
    } else {
        cout << "Geçersiz iþlem!";
    }

    return 0;
}
