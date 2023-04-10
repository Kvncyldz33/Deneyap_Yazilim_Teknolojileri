#include <iostream> // Giriþ çýkýþ iþlemleri için gerekli olan iostream kütüphanesini dahil eder.
using namespace std; // std namespace'ini kullanacaðýmýzý belirtir.
int main() // main fonksiyonunu tanýmlar
{
int toplam,sayac; // toplam ve sayac deðiþkenini tanýmlar
toplam = 0; // toplam deðiþkenini 0 deðeriyle baþlatýr
sayac = 0; // sayac deðiþkenini 0 deðeriyle baþlatýr

/* Aþaðýdaki þekilde de kullanýlabilir.
    int toplam = 0; // toplam deðiþkenini tanýmlar ve 0 deðeriyle baþlatýr
    int sayac = 0; // sayac deðiþkenini tanýmlar ve 0 deðeriyle baþlatýr
*/

while ( sayac < 100) // sayac deðiþkeni 100'den küçük olduðu sürece döngüye girer
    {
    if (sayac%2==0) // sayac deðiþkeninin 2'ye bölümünden kalan 0 ise koþul doðru olur
        {
        toplam += sayac; // toplam deðiþkenine sayac deðiþkenini ekler
        }
        sayac += 1; // sayac deðiþkenini bir arttýrýr
        /* Aþaðýdaki þekillerde kullanýlabilir.
        sayac += 1; //sayac = sayac + 1; // sayac ++;
        */
    }
cout << "Toplam = " << toplam << endl; // toplam deðiþkeninin deðerini ekrana yazdýrýr
return 0; // programýn doðru bir þekilde sonlandýðýný belirtir
