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
	setlocale(LC_ALL,"Turkish"); //Türkçe karakter
	int kk,uk;
	cout<<"Kısa Kenar : ";
	cin>>kk;
	cout<<"Uzun Kenar : ";
	cin>>uk;
	cout<<"Alan = "<<Alan(kk,uk)<<endl;
	cout<<"Çevre = "<<Cevre(kk,uk);
}
