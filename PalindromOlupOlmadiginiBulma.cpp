#include<iostream>

using namespace std;
 
int main()
{
	int a, no, b, temp=0;
	cout << "Herhangi bir sayi giriniz: ";
	cin >> no;
	b = no;
	while(no>0)
	{
		a=no%10;
		no=no/10;
		temp=temp*10+a;
	}
	
	if(temp==b)
	{
		cout << "Girilen Sayi Palindrom";
	}
	else
	{
		cout << "Girilen Sayi Palindrom Degil";
	}
  	return 0;
}
