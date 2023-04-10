#include <iostream>
using namespace std;
int main()
{
	int toplam=0;
	int sayi;
   setlocale(LC_ALL,"Turkish"); //Türkçe karakter
   for(int i=1;i<=10;i++)
   {
   cout<<i<<". Sayıyı Girin : ";
   cin>>sayi;
   	toplam=toplam+sayi;
   }
   cout<<"Girilen 5 sayının toplamı : "<<toplam/10;
}