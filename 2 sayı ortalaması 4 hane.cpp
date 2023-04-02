#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double sayi1, sayi2, ortalama;
    cout << "Birinci sayiyi girin: ";
    cin >> sayi1;
    cout << "Ikinci sayiyi girin: ";
    cin >> sayi2;
    ortalama = (sayi1 + sayi2) / 2.0;
    cout << "Ortalama: " << fixed << setprecision(4) << ortalama << endl;
    return 0;
}
