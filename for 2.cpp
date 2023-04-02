#include <iostream>
using namespace std;

int main() {
    int toplam = 0;
    for (int sayi = 1; sayi <= 100; sayi++) {
        if (sayi % 2 == 0) {
            toplam += sayi;
        }
    }
    cout << "1 ile 100 arasýndaki çift sayýlarýn toplamý: " << toplam << endl;
    return 0;
}
