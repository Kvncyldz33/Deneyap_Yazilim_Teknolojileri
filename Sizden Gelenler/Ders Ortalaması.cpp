#include <iostream>
using namespace std;

int main()
{
float toplam,ortalama;
int matematik; // int veri tipinde matematik değişkeni oluşturuldu.
int turkce; // int veri tipinde turkce değişkeni oluşturuldu.
int sosyal; // int veri tipinde sosyal değişkeni oluşturuldu.
int fen; // int veri tipinde fen değişkeni oluşturuldu.
int ingilizce; // int veri tipinde ingilizce değişkeni oluşturuldu.
int din; // int veri tipinde din değişkeni oluşturuldu.
int muzik; // int veri tipinde muzik değişkeni oluşturuldu.
int resim; // int veri tipinde resim değişkeni oluşturuldu.
int beden; // int veri tipinde beden değişkeni oluşturuldu.
int tektas; // int veri tipinde tektas değişkeni oluşturuldu.
int secmeli1; // int veri tipinde secmeli1 değişkeni oluşturuldu.
int secmeli2; // int veri tipinde secmeli2 değişkeni oluşturuldu.
int secmeli3; // int veri tipinde secmeli3 değişkeni oluşturuldu.
const int x=85,y=70;

cout<<"matematik gir: ";
cin>>matematik;
cout<<"turkce gir: ";
cin>>turkce;
cout<<"sosyal gir: ";
cin>>sosyal;
cout<<"fen gir: ";
cin>>fen;
cout<<"ingilizce gir: ";
cin>>ingilizce;
cout<<"din gir: ";
cin>>din;
cout<<"muzik gir: ";
cin>>muzik;
cout<<"resim gir: ";
cin>>resim;
cout<<"beden gir: ";
cin>>beden;
cout<<"tektas gir: ";
cin>>tektas;
cout<<"secmeli1 gir: ";
cin>>secmeli1;
cout<<"secmeli2 gir: ";
cin>>secmeli2;
cout<<"secmeli3 gir: ";
cin>>secmeli3;

toplam = matematik +turkce +sosyal +fen +ingilizce +din +muzik +resim +beden +tektas +secmeli1 +secmeli2 +secmeli3;
cout<<"Toplam: "<<toplam<<endl;
ortalama=toplam/13;
cout<<"ortalama: "<<ortalama<<endl;
if (ortalama >= x)
    {
      cout << ortalama<<" puan: "
       "  Ogrenciniz Taktir Belgesi aldı.Tebrikler.";
    }
if (ortalama >= y && ortalama < x)
    {
      cout << ortalama<<" puan: "
       "  Ogrenciniz Tesekkur Belgesi aldı.";
    }
if (ortalama < y)
    {
      cout << ortalama<<" puan: "
       "  Ogrenciniz Duz gecti.Basarisiz.";
    }
}
