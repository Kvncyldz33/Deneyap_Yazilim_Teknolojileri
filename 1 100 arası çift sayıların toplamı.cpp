#include <iostream> // Giri� ��k�� i�lemleri i�in gerekli olan iostream k�t�phanesini dahil eder.
using namespace std; // std namespace'ini kullanaca��m�z� belirtir.
int main() // main fonksiyonunu tan�mlar
{
int toplam,sayac; // toplam ve sayac de�i�kenini tan�mlar
toplam = 0; // toplam de�i�kenini 0 de�eriyle ba�lat�r
sayac = 0; // sayac de�i�kenini 0 de�eriyle ba�lat�r

/* A�a��daki �ekilde de kullan�labilir.
    int toplam = 0; // toplam de�i�kenini tan�mlar ve 0 de�eriyle ba�lat�r
    int sayac = 0; // sayac de�i�kenini tan�mlar ve 0 de�eriyle ba�lat�r
*/

while ( sayac < 100) // sayac de�i�keni 100'den k���k oldu�u s�rece d�ng�ye girer
    {
    if (sayac%2==0) // sayac de�i�keninin 2'ye b�l�m�nden kalan 0 ise ko�ul do�ru olur
        {
        toplam += sayac; // toplam de�i�kenine sayac de�i�kenini ekler
        }
        sayac += 1; // sayac de�i�kenini bir artt�r�r
        /* A�a��daki �ekillerde kullan�labilir.
        sayac += 1; //sayac = sayac + 1; // sayac ++;
        */
    }
cout << "Toplam = " << toplam << endl; // toplam de�i�keninin de�erini ekrana yazd�r�r
return 0; // program�n do�ru bir �ekilde sonland���n� belirtir
