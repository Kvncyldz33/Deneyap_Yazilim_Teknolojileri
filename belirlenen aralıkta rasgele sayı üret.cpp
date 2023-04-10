#include <iostream> // Giriş/Çıkış işlemleri için iostream kütüphanesini dahil etme
#include <ctime>    // Zaman işlemleri için ctime kütüphanesini dahil etme

using namespace std; //C++’da std adında standart kütüphane alanı (namspace) yer alır. Buradaki kodları (cin - cout gibi) , kodda namespace yazmadan kullanmamızı sağlar.

int main()
{
  int maxsayi = 50, minsayi = 10; // Maksimum ve minimum sayıları tanımlama
  srand(time(0));                // srand fonksiyonunu çağırarak rastgele sayı üretiminde tohum değerini zaman ile ayarlama
  for(int i = 0; i < 5; i++)    // 5 kere dönen bir döngü başlatıyoruz. Bize 5 tane sayı üretecek.
  {
    // minsayi ile maxsayi arasında rastgele bir sayı üretme ve ekrana yazdırma
    // minsayi + (rand() % (maxsayi - minsayi + 1)) ifadesi, minsayi ile maxsayi arasında (maxsayi dahil) rastgele bir sayı üretir
    cout << minsayi + (rand() % (maxsayi - minsayi + 1 )) << endl;
  }

  return 0; // Programın başarılı bir şekilde sonlandığını belirten değeri döndürme
}
