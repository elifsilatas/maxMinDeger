#include <iostream>

using namespace std;

int main()
{
	int x,y,z;
	cout << "Lutfen birinci sayiyi giriniz: ";
	cin >> x;
	cout << "Lutfen ikinci sayiyi giriniz: ";
	cin >> y;
	cout << "Lutfen ucuncu sayiyi giriniz: ";
	cin >> z;
	
	int enbuyuk =  x;
	
	if(x>y && x>z)
	{
		enbuyuk = x;
	}
	else if(y>x && y>z)
	{
		enbuyuk = y;
	}
	else
	{
		enbuyuk = z;
	}
	cout << "En buyuk sayi: " << enbuyuk << endl;
	
	int enkucuk = x;
	
	if(x<y && x<z)
	{
		enkucuk = x;
	}
	else if(y<x && y<z)
	{
		enkucuk = y;
	}
	else
	{
		enkucuk = z;
	}
	cout << "En kucuk sayi: " << enkucuk << endl;
	
	return 0;
	
}