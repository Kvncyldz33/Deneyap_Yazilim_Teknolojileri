#include <iostream> // C++ standart giriş/çıkış kütüphanesi olan iostream kütüphanesini programımıza dahil ediyoruz.
using namespace std;
/* using namespace std:
C++ dilinde, kodlarımızda tanımlanan fonksiyonlar, değişkenler, sınıflar ve diğer öğeler grup halinde yer alır.
std, C++ standart kütüphanesinde yer alan öğeleri içerir. Bu standart kütüphane, giriş/çıkış işlemleri için kullanılan cout, cin gibi öğeleri içerir.
using namespace std; ifadesi, std içinde yer alan öğeleri kullanabilmek için kullanılır. Bu şekilde, örneğin cout veya cin gibi öğeleri direkt olarak kullanabiliriz.
using namespace std; ifadesi, C++ standart kütüphanesindeki öğelerin adını yazmak için, std:: ön ekini kullanmak yerine kısaltma yapar.
Bu, kodun okunmasını kolaylaştırır ve yazılacak kod miktarını azaltır.
Örneğin, std::cout yerine, sadece cout yazarak cout fonksiyonunu kullanabiliriz.
*/
int main()
{
    setlocale(LC_ALL,"Turkish"); //Türkçe karakterleri kullanabilmek için. Programın başlangıcında setlocale() fonksiyonu ile programın Türkçe karakter desteğinin açılmasını sağlıyoruz. Bu sayede, Türkçe karakterler doğru bir şekilde yazdırılabilir.

    int d_tarih; //Programın başlangıcında setlocale() fonksiyonu ile programın Türkçe karakter desteğinin açılmasını sağlıyoruz. Bu sayede, Türkçe karakterler doğru bir şekilde yazdırılabilir.
    cout << "Dogum tarihinizi giriniz: "; // cout << "Doğum tarihinizi giriniz: "; // Türkçe karakter için setlocale eklendi.
    cin >> d_tarih;
    cout << "\nDogum tarihiniz: " << d_tarih<<" .Nice yaşlarınız olsun."; // cout << "\nDoğum tarihiniz: " << d_tarih<<" dur";  // Türkçe karakter için setlocale eklendi.
    // cout << endl<<"Dogum tarihiniz: " << d_tarih<<" dur"; şeklinde de kullanılabilir.
    return 0;
}
