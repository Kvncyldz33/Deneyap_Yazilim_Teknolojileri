#include <iostream>
using namespace std;
int main()
{
       double sayi1, sayi2, ortalama;
       cout << "1. sayiyi girin: ";
       cin >> sayi1;
       cout << "2. sayiyi girin: ";
       cin >> sayi2;
       ortalama = (sayi1 + sayi2) / 2;
       cout << endl << "Ortalama: " << ortalama;
       return 0;
}
