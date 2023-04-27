#include<iostream>
using namespace std;
int main()
{
int i, j, satir=3, sutun=3, matris1[3][3], matris2[3][3], sonuc[3][3];
for(i = 0; i < satir; i++)
    {
        for(j = 0; j < sutun; j++)
            {
                cout << "1. Matrisin [" <<i<< "," <<j<<"]. elemanini giriniz: ";
                cin >> matris1[i][j];
            }
    }
    cout << endl;

for(i = 0; i < satir; i++)
    {
        for(j = 0; j < sutun; j++)
            {
                cout << "2. Matrisin [" <<i<< "," <<j<<"]. elemanini giriniz: ";
                cin >> matris2[i][j];
            }
    }
    cout<<"\nSonuc Matrisi: " << endl;

for(i = 0; i < satir; i++)
    {
        for(j = 0; j < sutun; j++)
            {
                sonuc[i][j] = matris1[i][j] + matris2[i][j];
                cout << sonuc[i][j] << " ";
            }
            cout << endl;
    }
return 0;
}
