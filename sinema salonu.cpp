#include <iostream>

using namespace std;

int main() {
  int yas;
  cout << "Lutfen yasinizi girin: ";
  cin >> yas;

  if (yas < 18) {
    cout << "Bilet ucreti: 15 TL." << endl;
  } else if (yas >= 65) {
    cout << "Bilet ucreti: 10 TL." << endl;
  } else {
    cout << "Bilet ucreti: 20 TL." << endl;
  }

  return 0;
}
