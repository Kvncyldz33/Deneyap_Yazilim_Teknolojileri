#include <iostream>
using namespace std;
int main()
{
   setlocale(LC_ALL,"Turkish"); //T�rk�e karakter
   int s1,s2,toplam;
   cout<<"1. Say�y� Girin : ";
   cin>>s1;
   cout<<"2. Say�y� : ";
   cin>>s2;
   toplam=s1+s2;
   cout<<"Say�lar�n Toplam� : "<<toplam;
}
