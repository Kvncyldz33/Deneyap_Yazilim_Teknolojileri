#include <iostream>
using namespace std;

int main()
{
int sayi; // int veri tipinde sayi deðiþkeni oluþturuldu.
const int x=500,y=490,z=480,a=470,b=460,c=450;

cout<<"sayi gir: ";
cin>>sayi;
if (sayi >= x)
    {
      cout << sayi<<" puan: "
       "  Galatasaray Lisesi veya Robert Kolej kazandý";
    }
if (sayi >= y)
    {
      cout << sayi<<" puan: "
       "  Ankara Fen Lisesi veya Ýstanbul Erkek Lisesi kazandý";
    }
if (sayi >= z)
    {
      cout << sayi<<" puan: "
       "  Eyüp Aygar Fen Lisesi veya Adana Fen Lisesi kazandý";
    }
if (sayi >= a)
    {
      cout << sayi<<" puan: "
       "  Yahya Akel Fen Lisesi veya Adnan Menderes Fen Lisesi kazandý";
    }
if (sayi >= b)
    {
      cout << sayi<<" puan: "
       "  Selçuklu Fen Lisesi veya Adýyaman Fen Lisesi kazandý";
    }
if (sayi >= c)
    {
      cout << sayi<<" puan: "
       "  Bafra Fen Lisesi veya Abdulhamit Han Fen Lisesi kazandý";
    }
}
