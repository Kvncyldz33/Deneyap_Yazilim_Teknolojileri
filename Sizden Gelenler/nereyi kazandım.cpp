#include <iostream>
using namespace std;

int main()
{
int sayi; // int veri tipinde sayi de�i�keni olu�turuldu.
const int x=500,y=490,z=480,a=470,b=460,c=450;

cout<<"sayi gir: ";
cin>>sayi;
if (sayi >= x)
    {
      cout << sayi<<" puan: "
       "  Galatasaray Lisesi veya Robert Kolej kazand�";
    }
if (sayi >= y)
    {
      cout << sayi<<" puan: "
       "  Ankara Fen Lisesi veya �stanbul Erkek Lisesi kazand�";
    }
if (sayi >= z)
    {
      cout << sayi<<" puan: "
       "  Ey�p Aygar Fen Lisesi veya Adana Fen Lisesi kazand�";
    }
if (sayi >= a)
    {
      cout << sayi<<" puan: "
       "  Yahya Akel Fen Lisesi veya Adnan Menderes Fen Lisesi kazand�";
    }
if (sayi >= b)
    {
      cout << sayi<<" puan: "
       "  Sel�uklu Fen Lisesi veya Ad�yaman Fen Lisesi kazand�";
    }
if (sayi >= c)
    {
      cout << sayi<<" puan: "
       "  Bafra Fen Lisesi veya Abdulhamit Han Fen Lisesi kazand�";
    }
}
