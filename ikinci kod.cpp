#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL,"Turkish"); //Türkçe karakterleri kullanabilmek için

    int d_tarih;
    cout << "Dogum tarihinizi giriniz: "; // cout << "Doðum tarihinizi giriniz: "; // Türkçe karakter için setlocale eklendi.
    cin >> d_tarih;
    cout << "\nDogum tarihiniz: " << d_tarih<<" dur"; // cout << "\nDoðum tarihiniz: " << d_tarih<<" dur";  // Türkçe karakter için setlocale eklendi.
    // cout << endl<<"Dogum tarihiniz: " << d_tarih<<" dur"; þeklinde de kullanýlabilir.
    return 0;
}
