#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Turkish");
    int yil1;
    cout << "Doðum yýlýný girin: ";
    cin >> yil1;

    string mesajlar[] = {"Þu cennet ülke TÜRKÝYE'ye hoþgeldin", "1 yasina hosgeldin", "2 yasina hosgeldin", "3 yasina hosgeldin", "4 yasina hosgeldin", "5 yasina hosgeldin", "6 yasina hosgeldin", "7 yasina hosgeldin", "8 yaþýna hoþgeldin", "9 yaþýna hoþgeldin", "10 yaþýna hoþgeldin", "11 yaþýna hoþgeldin", "12 yaþýna hoþgeldin", "13 yaþýna hoþgeldin", "14 yaþýna hoþgeldin", "15 yaþýna hoþgeldin", "16 yaþýna hoþgeldin", "17 yaþýna hoþgeldin", "18 yaþýna hoþgeldin", "19 yaþýna hoþgeldin", "20 yaþýna hoþgeldin", "21 yaþýna hoþgeldin", "22 yaþýna hoþgeldin", "23 yaþýna hoþgeldin"};
    int yil_sayisi[] = {2023, 2022, 2021, 2020, 2019, 2018, 2017, 2016, 2015, 2014, 2013, 2012, 2011, 2010, 2009, 2008, 2007, 2006, 2005, 2004, 2003, 2002, 2001, 2000};
    int yas = -1;
    for (int i = 0; i < 24; i++) {
        if (yil1 == yil_sayisi[i]) {
            yas = i;
            break;
        }
    }
    if (yas == -1) {
        cout << "Geçersiz yýl girdiniz." << endl;
    } else {
        cout << mesajlar[yas] << endl;
    }

    return 0;
}
