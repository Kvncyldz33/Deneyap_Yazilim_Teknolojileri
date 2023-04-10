#include <iostream>
using namespace std;
int main()
{
    int x = 7, y = 1;
    cout << ((x <= y) || (y>1)) << endl;
    cout << ((x > 6) && (y==1)) << endl;
    cout << (x && !y) << endl;
    cout << (!(x-1) || (y+1 > 1)) << endl;
    return 0;
}
