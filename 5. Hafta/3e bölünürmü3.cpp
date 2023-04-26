#include <iostream>
using namespace std;
int main()
{
int sayi;
cout << "Bir sayi girin: ";
cin >> sayi;
if (sayi < 0)
{
    cout << "Sayi negatif." << endl;
}
else
{
    if (sayi % 3 == 0)
    {
      cout << "Sayi 3'e tam bolunur." << endl;
    } else {
      cout << "Sayi 3'e tam bolunemez." << endl;
    }
}

  return 0;
}
