#include <iostream>
using namespace std;

void ucgen_alan_hesapla(double taban, double yukseklik)
{
    double alan = (taban*yukseklik) / 2;
    cout << alan << endl;
}


int main()
{
    ucgen_alan_hesapla(2,4);
}
