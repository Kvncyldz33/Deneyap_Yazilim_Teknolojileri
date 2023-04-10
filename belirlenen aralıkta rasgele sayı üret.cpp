#include <iostream> // Giriş/Çıkış işlemleri için iostream kütüphanesini ekleme
#include <ctime>    // srand fonksiyonu için ctime kütüphanesini dahil etme

using namespace std; // C++’da std adında standart kütüphane alanı (namspace) yer alır. Buradaki kodları (cin - cout gibi) , kodda namespace yazmadan kullanmamızı sağlar.

int main()
{
  int maxsayi = 50, minsayi = 10; // Maksimum ve minimum sayıları tanımlama
  srand(time(0));                // srand fonksiyonunu çağırarak her seferinde farklı sayı üretmesini sağlıyoruz
  for(int i = 0; i < 5; i++)    // 5 kere dönen bir döngü başlatıyoruz. Bize 5 tane sayı üretecek.
  {      
    cout << minsayi + (rand() % (maxsayi - minsayi + 1 )) << endl; // minsayi + (rand() % (maxsayi - minsayi + 1)) ifadesi, minsayi ile maxsayi arasında (maxsayi dahil) rastgele bir sayı üretir ve ekrana yazdırır
  }

  return 0; // Programın doğru şekilde sonlandığını belirtir
}
