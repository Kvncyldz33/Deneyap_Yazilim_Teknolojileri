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

    switch (islem)
    {
        case '+': // toplama iþlemi
            sonuc = sayi1 + sayi2;
            cout << sayi1 << "+" << sayi2 << " = " << sonuc;
            break;
        case '-': // çýkarma iþlemi
            sonuc = sayi1 - sayi2;
            cout << sayi1 << "-" << sayi2 << " = " << sonuc;
            break;
        case '*': // çarpma iþlemi
            sonuc = sayi1 * sayi2;
            cout << sayi1 << "*" << sayi2 << " = " << sonuc;
            break;
            case '/': // bölme iþlemi
                if (sayi2 == 0) {
                    cout << "Sýfýra bölme hatasý!";
                } else {
                    sonuc = sayi1 / sayi2;
                    cout << sayi1 << "/" << sayi2 << " = " << sonuc;
                }
            break;
        default: // geçersiz iþlem
            cout << "Geçersiz iþlem!";
            break;
    }

    return 0;
}
