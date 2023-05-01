#include <iostream>

using namespace std;

void dikdortgen_hesapla(double kisa_kenar, double uzun_kenar, double& alan, double& cevre) {
    alan = kisa_kenar * uzun_kenar;
    cevre = 2 * (kisa_kenar + uzun_kenar);
}

int main() {
    double kisa, uzun, alan, cevre;
    cout << "Kisa kenari giriniz: ";
    cin >> kisa;
    cout << "Uzun kenari giriniz: ";
    cin >> uzun;

    dikdortgen_hesapla(kisa, uzun, alan, cevre);
    cout << "Dikdortgenin alani: " << alan << endl;
    cout << "Dikdortgenin cevresi: " << cevre << endl;

    return 0;
}
