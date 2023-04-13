#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
    int özlem;
    setlocale(LC_ALL, "Turkish");
    cout << "özlem derecesi gir(0-100):";
    cin >> özlem;
    
    if(özlem<=10)
    {
        cout << "Aranızda çok özlem kalmamış";
    }
   else if(özlem<=50)
    {
        cout << "Hey sakin ol onu o kadar özleme ";
    }
else if (özlem<=100)
    {
        cout << "Anlıyorum ayrılık gibi şeyler özlem duygunu arttırır bence takma kafaya gitsin. Biliyorum bu zor ama denemekten zarar gelmez";
    }
    else 
    {
        cout << "Hatali giris";
    }
    return (0);
}
