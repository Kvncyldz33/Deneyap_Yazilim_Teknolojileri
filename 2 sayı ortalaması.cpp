#include <iostream>
using namespace std;
int main()
{
   setlocale(LC_ALL,"Turkish"); //T�rk�e karakter
   int s1,s2,ort;
   cout<<"1. Say�y� Girin : ";
   cin>>s1;
   cout<<"2. Say�y� : ";
   cin>>s2;
   ort=(s1+s2)/2;
   cout<<"Say�lar�n Ortalamas� : "<<ort;
}
