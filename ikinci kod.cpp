#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL,"Turkish"); //T�rk�e karakterleri kullanabilmek i�in

    int d_tarih;
    cout << "Dogum tarihinizi giriniz: "; // cout << "Do�um tarihinizi giriniz: "; // T�rk�e karakter i�in setlocale eklendi.
    cin >> d_tarih;
    cout << "\nDogum tarihiniz: " << d_tarih<<" dur"; // cout << "\nDo�um tarihiniz: " << d_tarih<<" dur";  // T�rk�e karakter i�in setlocale eklendi.
    // cout << endl<<"Dogum tarihiniz: " << d_tarih<<" dur"; �eklinde de kullan�labilir.
    return 0;
}
