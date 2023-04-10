#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Turkish");
    int x, y, z;
    cout << "Kaç satýrda yazsýn: ";
    cin >> x;
    for (y = 1; y <= x; y++)
        {
        for (z = 1; z <= y; z++)
            {
                cout << z;
            }
        cout << endl;
        }
    return 0;
}
