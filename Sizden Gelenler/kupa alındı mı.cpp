#include <iostream>
using namespace std;
int main()
{
int sayi;// int veri tipinde sayi de�i�keni olu�turuldu.
const int x=90, y=80, z=70, a=60, b=50;

cout<<"sayi gir: ";
cin>>sayi;
if (sayi >= x)
    {
    cout << sayi<<" puan: yeni lige y�kseldin ve �ampiyon oldun";
    }

else if (sayi >= y)
    {
    cout << sayi<<" puan: ligde kald�n ama kupa alamad�n";
    }

else if (sayi >= z)
    {
    cout << sayi<<" puan: 3.oldun yine kupa alamad�n";
    }

else if (sayi >= a)
    {
    cout << sayi<<" puan: alt lige d��t�n";
    }

else
    {
    cout << sayi<<" puan: kul�p kapand�" ;
    }
}
