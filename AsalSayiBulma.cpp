#include<iostream>

using namespace std;
 
int main()
{
	int i,no;
	cout << "Bir sayi giriniz: "; 
	cin >> no;
	
	if(no==1)
	{
		cout << "En kucuk asal sayi 2 dir";
	}
	
	for(i=2;i<no;i++)
	{
		if(no%i==0)
		{
			cout << "Asal sayi degil";
			break;
		}
	}
	
	if(no==i)
	{
		cout << "Asal sayi";
	}
	
  	return 0;
}
