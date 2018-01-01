#include<iostream>

using namespace std;
 
int main()
{
	int a,no,sum=0;
	cout << "Herhangi bir sayi giriniz: ";
	cin >> no;
	while(no>0)
	{
		a=no%10;
		no=no/10;
		sum=sum+a;
	}
	cout << "\nBasamaklar toplami: " << sum;
	return 0;
}
