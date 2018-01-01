#include<iostream>

using namespace std;
 
int main()
{
	int no, a = 0;
	cout << "Bir sayi giriniz: ";
	cin >> no;
	
	while(no>0)
	{
		no=no/10;
		a++;
	}
	
	cout << "\nBasamak sayisi: " << a;
	
  	return 0;
}
