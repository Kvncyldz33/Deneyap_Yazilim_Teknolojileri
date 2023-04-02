#include <iostream>
using namespace std;

int main ()
{

int dizi[] = {1, 2, 3, 4, 5, 6}; //int dizi[6] = {1, 2, 3, 4, 5, 6}; þeklinde de kullanýlabilir.
int * pc;
pc = & dizi[0];

printf("%d\n", *pc);
printf("%d", dizi[2]);

}

/*
#include <iostream>
#include <string>
using namespace std;

int main() {
  string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
  cars[0] = "Opel";
  cout << cars[0];
  return 0;
}
*/
