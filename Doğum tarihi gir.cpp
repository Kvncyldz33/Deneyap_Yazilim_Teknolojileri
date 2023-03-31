#include <iostream> // C++ standart giriþ/çýkýþ kütüphanesi olan iostream kütüphanesini programýmýza dahil ediyor.
using namespace std; // using namespace std; ifadesi, C++ standart kütüphanesindeki öðelerin adýný yazmak yerine, std:: ön ekini kullanmaz ve kýsaltma yapar. Bu, kodun okunmasýný kolaylaþtýrýr ve yazýlacak kod miktarýný azaltýr. Örneðin, std::cout yerine, sadece cout yazarak cout fonksiyonunu kullanabiliriz.
int main() // C++ programlarýnýn baþlatýlmasýný ve yürütülmesini saðlayan ana fonksiyondur. main() fonksiyonu, C++ dilinde en temel ve zorunlu fonksiyonlardan biridir ve bir C++ programý en az bir main() fonksiyonu içermelidir.
{
    setlocale(LC_ALL,"Turkish"); //Türkçe karakterleri kullanabilmek için. Programýn baþlangýcýnda setlocale() fonksiyonu ile programýn Türkçe karakter desteðinin açýlmasýný saðlýyoruz. Bu sayede, Türkçe karakterler doðru bir þekilde yazdýrýlabilir.

    int d_tarih; //Programýn baþlangýcýnda setlocale() fonksiyonu ile programýn Türkçe karakter desteðinin açýlmasýný saðlýyoruz. Bu sayede, Türkçe karakterler doðru bir þekilde yazdýrýlabilir.
    cout << "Dogum tarihinizi giriniz: "; // cout << "Doðum tarihinizi giriniz: "; // Türkçe karakter için setlocale eklendi.
    cin >> d_tarih; //d_tarih adlý bir tamsayý deðiþkeni tanýmlanýr. Kullanýcýdan doðum tarihini girmesi istenir. Kullanýcýnýn girdiði deðer cin ile d_tarih deðiþkenine atanýr.
    cout << "\nDogum tarihiniz: " << d_tarih<<" dur"; // cout << "\nDoðum tarihiniz: " << d_tarih<<" dur";  // Türkçe karakter için setlocale eklendi.
    // cout << endl<<"Dogum tarihiniz: " << d_tarih<<" dur"; þeklinde de kullanýlabilir.
    return 0; // C++ dilinde, main() fonksiyonu mutlaka bir return ifadesi ile sonlandýrýlmalýdýr. return 0; ifadesi, main() fonksiyonunun sonlandýðýný ve programýn baþarýyla tamamlandýðýný bildirir.
}

