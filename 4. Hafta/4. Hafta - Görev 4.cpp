#include <iostream>
using namespace std;
int main()
{
    float x, y, z;
    x = 4.3;
    y = x;
    z = x + 2.5 + (y * 3.0);

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "z: " << z << endl << endl;

    x = y = 2.1;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl << endl;

    x+= 3.8;
    y+= y * 3.0;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl << endl;

    x/= 2.0;
    y*= 4.0;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl << endl;

    return 0;
}
