#include <iostream>
#include <cmath>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "turkish");
    string heart = "SudeMiraç";
    double a, b, c;
    for (int y = 15; y >= -15; y--) {
        for (int x = -30; x < 30; x++) {
            a = x * 0.05;
            b = y * 0.1;
            c = a * a + b * b - 1;
            int index = (x - y) % heart.length();
            if (index < 0) {
                index += heart.length();
            }
            cout << ((c * c * c) - (a * a * b * b * b) <= 0 ? heart[index] : ' ');
        }
        cout << endl;
    }
    return 0;
}
