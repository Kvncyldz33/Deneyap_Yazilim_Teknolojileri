#include <iostream>
using namespace std;
int main()
{
   setlocale(LC_ALL,"Turkish"); //Turkce karakter
   int s1,s2,ort;
   cout<<"1. Sayiyi Girin : ";
   cin>>s1;
   cout<<"2. Sayiyi : ";
   cin>>s2;
   ort=(s1+s2)/2;
   cout<<"Sayilarin Ortalamasi : "<<ort;
}
