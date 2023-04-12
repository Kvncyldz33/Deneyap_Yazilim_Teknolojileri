#include <iostream>
using namespace std;
int main()
{
int sayi;// int veri tipinde sayi deðiþkeni oluþturuldu.
const int x=90, y=80, z=70, a=60, b=50;

cout<<"sayi gir: ";
cin>>sayi;
if (sayi >= x)
    {
    cout << sayi<<" puan: yeni lige yükseldin ve þampiyon oldun";
    }

else if (sayi >= y)
    {
    cout << sayi<<" puan: ligde kaldýn ama kupa alamadýn";
    }

else if (sayi >= z)
    {
    cout << sayi<<" puan: 3.oldun yine kupa alamadýn";
    }

else if (sayi >= a)
    {
    cout << sayi<<" puan: alt lige düþtün";
    }

else
    {
    cout << sayi<<" puan: kulüp kapandý" ;
    }
}
