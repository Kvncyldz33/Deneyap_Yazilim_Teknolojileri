#include <iostream>
using namespace std;

int Alan(int kk,int uk)
{
	return kk*uk;
}

int Cevre(int kk,int uk)
{
	return (kk+uk)*2; // ya da return (kk*2) + (uk*2);
}

int main()
{
	setlocale(LC_ALL,"Turkish"); //T�rk�e karakter
	int kk,uk;
	cout<<"K�sa Kenar : ";
	cin>>kk;
	cout<<"Uzun Kenar : ";
	cin>>uk;
	cout<<"Alan = "<<Alan(kk,uk)<<endl;
	cout<<"�evre = "<<Cevre(kk,uk);
}
