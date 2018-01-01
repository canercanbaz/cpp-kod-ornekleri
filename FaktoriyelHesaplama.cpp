#include<iostream>

using namespace std;
 
int main()
{
	int i, no, fact=1;
	cout << "Bir sayi giriniz: "; 
	cin >> no;
	
	for(i=1; i<=no; i++)
	{
		fact=fact*i;
	}
	
	cout << "Faktoriyel: " << fact;
	
  	return 0;
}
