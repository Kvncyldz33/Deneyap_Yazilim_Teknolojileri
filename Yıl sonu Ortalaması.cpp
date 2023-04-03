#include <iostream>
using namespace std;
int main()
{
setlocale(LC_ALL,"Turkish");
float ortalama;
cout << "Yıl sonu not ortalamanız kaç: ";
cin >> ortalama;
if (ortalama >= 50)
    {
            cout << "Başarılı! ";
    if (ortalama >= 85)
        {
            cout << "Takdir belgesi aldınız." << endl;
        }
    else if (ortalama >= 70)
        {
            cout << "Teşekkür belgesi aldınız." << endl;
        }
    else
        {
            cout << "Belge alamadınız." << endl;
        }
    }
    else
    {
      cout << "Başarısız! Sınıfta kaldınız." << endl;
    }
   return 0;
}
