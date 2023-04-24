#include <iostream>
using namespace std;
int main()
{
   int d_yili[2][3] = {{2005, 2004, 2003},
                        {2008, 2006, 2002}};
   int k = 1;
   for(int i=0; i<2;i++) // 1. for döngüsü
    {
      for(int j=0; j<3; j++,k++) // 2. for döngüsü // k++ burada kullanlmasaydı coutdan sonra kullanılması gerekirdi. // j++&&k++ şeklinde de kullanılabilirdi.
        {
            cout << k << ". arkadasimin dogum yili: " << d_yili[i][j] << endl;
            //k+=1; //k++; // for içinde arttırıldığı için burada kullanmadık.
      	}
    }
   return 0;
}
