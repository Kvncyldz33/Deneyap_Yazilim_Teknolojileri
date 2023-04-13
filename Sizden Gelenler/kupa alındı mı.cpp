#include <iostream>
using namespace std;
int main()
{
int sayi;// int veri tipinde sayi değişkeni oluşturuldu.
const int x=90, y=80, z=70, a=60, b=50;

cout<<"sayi gir: ";
cin>>sayi;
if (sayi >= x)
    {
    cout << sayi<<" puan: yeni lige yükseldin ve şampiyon oldun";
    }

else if (sayi >= y)
    {
    cout << sayi<<" puan: ligde kaldın ama kupa alamadın";
    }

else if (sayi >= z)
    {
    cout << sayi<<" puan: 3.oldun yine kupa alamadın";
    }

else if (sayi >= a)
    {
    cout << sayi<<" puan: alt lige düştün";
    }

else
    {
    cout << sayi<<" puan: kulüp kapandı" ;
    }
}

