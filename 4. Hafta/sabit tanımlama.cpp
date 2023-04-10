#include <iostream>
using namespace std;
int main()
{
    const int DOGUM_YILI = 2005;
    int boy = 175, kilo=72;

    cout << "Dogum yilim: " << DOGUM_YILI << endl;
    cout << "Boyum: " << boy << endl;
    cout << "Kilom: " << kilo << endl;

    return(0);
}

/* Sabitleri ayýrmak için aþaðýdaki üç kural:
1) “const” anahtar sözcüðünü kullanarak tanýmlarýz.
2) Sabit adlarý, deðiþken adlarýndan ayýrt etmek için büyük harfle yazýlýr.
3) Sabitler her zaman tanýmlama sýrasýnda deðerlerini almalýdýr. */
