#include <iostream>
using namespace std;

int main()
{
int sayi;
const int x=10;
cout<<"sayi gir: ";
cin>>sayi;
if (sayi > x)
    {
      cout << sayi<<" sayisi "<<x<<"'dan buyuk";
    }
else
    {
      cout << sayi<<" sayisi "<<x<<"'dan kucuk";
    }
}
