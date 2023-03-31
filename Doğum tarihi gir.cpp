#include <iostream> // C++ standart giri�/��k�� k�t�phanesi olan iostream k�t�phanesini program�m�za dahil ediyor.
using namespace std; // using namespace std; ifadesi, C++ standart k�t�phanesindeki ��elerin ad�n� yazmak yerine, std:: �n ekini kullanmaz ve k�saltma yapar. Bu, kodun okunmas�n� kolayla�t�r�r ve yaz�lacak kod miktar�n� azalt�r. �rne�in, std::cout yerine, sadece cout yazarak cout fonksiyonunu kullanabiliriz.
int main() // C++ programlar�n�n ba�lat�lmas�n� ve y�r�t�lmesini sa�layan ana fonksiyondur. main() fonksiyonu, C++ dilinde en temel ve zorunlu fonksiyonlardan biridir ve bir C++ program� en az bir main() fonksiyonu i�ermelidir.
{
    setlocale(LC_ALL,"Turkish"); //T�rk�e karakterleri kullanabilmek i�in. Program�n ba�lang�c�nda setlocale() fonksiyonu ile program�n T�rk�e karakter deste�inin a��lmas�n� sa�l�yoruz. Bu sayede, T�rk�e karakterler do�ru bir �ekilde yazd�r�labilir.

    int d_tarih; //Program�n ba�lang�c�nda setlocale() fonksiyonu ile program�n T�rk�e karakter deste�inin a��lmas�n� sa�l�yoruz. Bu sayede, T�rk�e karakterler do�ru bir �ekilde yazd�r�labilir.
    cout << "Dogum tarihinizi giriniz: "; // cout << "Do�um tarihinizi giriniz: "; // T�rk�e karakter i�in setlocale eklendi.
    cin >> d_tarih; //d_tarih adl� bir tamsay� de�i�keni tan�mlan�r. Kullan�c�dan do�um tarihini girmesi istenir. Kullan�c�n�n girdi�i de�er cin ile d_tarih de�i�kenine atan�r.
    cout << "\nDogum tarihiniz: " << d_tarih<<" dur"; // cout << "\nDo�um tarihiniz: " << d_tarih<<" dur";  // T�rk�e karakter i�in setlocale eklendi.
    // cout << endl<<"Dogum tarihiniz: " << d_tarih<<" dur"; �eklinde de kullan�labilir.
    return 0; // C++ dilinde, main() fonksiyonu mutlaka bir return ifadesi ile sonland�r�lmal�d�r. return 0; ifadesi, main() fonksiyonunun sonland���n� ve program�n ba�ar�yla tamamland���n� bildirir.
}

