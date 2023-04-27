#include <iostream>
using namespace std;

int main ( )
{
    int notlar[5];
    int i;
    for(i=0; i<5; i++){
        cout << i+1 << ". ogrenci notunu giriniz: ";
        cin >> notlar[i];
    }
    return 0;
}
