#include <iostream>
#include <locale> // setlocale() için gerekli kütüphane

using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish"); // Türkçe mesaj yazmak için
    double sayi1, sayi2, sonuc;
    char islem;

    cout << "Ýlk sayýyý girin: ";
    cin >> sayi1;
    cout << "Ýkinci sayýyý girin: ";
    cin >> sayi2;
    cout << "Ýþlemi girin (+, -, *, /): ";
    cin >> islem;

    if (islem == '+'){ // toplama iþlemi
        sonuc = sayi1 + sayi2;
        cout << sayi1 << "+" << sayi2 << " = " << sonuc;
    } else if (islem == '-') { // çýkarma iþlemi
        sonuc = sayi1 - sayi2;
        cout << sayi1 << "-" << sayi2 << " = " << sonuc;
    } else if (islem == '*') { // çarpma iþlemi
        sonuc = sayi1 * sayi2;
        cout << sayi1 << "*" << sayi2 << " = " << sonuc;
    } else if (islem == '/') { // bölme iþlemi
        if (sayi2 == 0) {
            cout << "Sýfýra bölme hatasý!";
        } else {
            sonuc = sayi1 / sayi2;
            cout << sayi1 << "/" << sayi2 << " = " << sonuc;
        }
    } else { // geçersiz iþlem
        cout << "Geçersiz iþlem!";
    }

    return 0;
}
