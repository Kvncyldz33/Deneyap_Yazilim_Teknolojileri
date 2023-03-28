#include <iostream>
using namespace std;
int main()
{
int toplam,sayac;
toplam = 0;
sayac = 0;

while ( sayac < 4)
{
toplam += sayac*2;
sayac += 1; //sayac = sayac + 1; // sayac ++;
}
cout << "Toplam = " << toplam << endl;
return 0;

}
