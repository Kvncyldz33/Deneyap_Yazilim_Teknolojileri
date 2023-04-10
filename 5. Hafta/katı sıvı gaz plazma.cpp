#include <iostream>
using namespace std;
int main()
{
int sayi;
cout<<"Sicaklik giriniz: ";
cin>>sayi;
if (sayi < 0)
    {
      cout << "Kati";
    }
else if (sayi < 100)
    {
      cout << "Sivi";
    }
else if (sayi < 10000)
        {
      cout << "Gaz";
    }
else
    {
      cout << "Plazma";
    }
return (0);
}
