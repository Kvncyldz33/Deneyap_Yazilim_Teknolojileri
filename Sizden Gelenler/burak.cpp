#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Turkish");
    int yil1;
    cout << "Do�um y�l�n� girin: ";
    cin >> yil1;

    string mesajlar[] = {"�u cennet �lke T�RK�YE'ye ho�geldin", "1 yasina hosgeldin", "2 yasina hosgeldin", "3 yasina hosgeldin", "4 yasina hosgeldin", "5 yasina hosgeldin", "6 yasina hosgeldin", "7 yasina hosgeldin", "8 ya��na ho�geldin", "9 ya��na ho�geldin", "10 ya��na ho�geldin", "11 ya��na ho�geldin", "12 ya��na ho�geldin", "13 ya��na ho�geldin", "14 ya��na ho�geldin", "15 ya��na ho�geldin", "16 ya��na ho�geldin", "17 ya��na ho�geldin", "18 ya��na ho�geldin", "19 ya��na ho�geldin", "20 ya��na ho�geldin", "21 ya��na ho�geldin", "22 ya��na ho�geldin", "23 ya��na ho�geldin"};
    int yil_sayisi[] = {2023, 2022, 2021, 2020, 2019, 2018, 2017, 2016, 2015, 2014, 2013, 2012, 2011, 2010, 2009, 2008, 2007, 2006, 2005, 2004, 2003, 2002, 2001, 2000};
    int yas = -1;
    for (int i = 0; i < 24; i++) {
        if (yil1 == yil_sayisi[i]) {
            yas = i;
            break;
        }
    }
    if (yas == -1) {
        cout << "Ge�ersiz y�l girdiniz." << endl;
    } else {
        cout << mesajlar[yas] << endl;
    }

    return 0;
}
