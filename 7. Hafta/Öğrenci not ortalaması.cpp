#include <iostream>
using namespace std;

int main ( )
{
    int notlar[5];
    int i,toplam;
    float ort;
    for(i=0; i<5; i++)
    {
        cout << i+1 << ". ogrenci notunu giriniz: ";
        cin >> notlar[i];
        toplam += notlar [i];
    }
    cout << endl << "Ogranci sayisi: " << i << endl;
    cout << "Toplam: " << toplam <<endl;
     ort = (float)toplam / i;
     cout << "Notlarin ortalamasi: " << ort << endl;

    return 0;
}
