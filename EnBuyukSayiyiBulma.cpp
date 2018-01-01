#include<iostream>

using namespace std;
 
int main()
{
	int a, b, c;
	cout << "Herhangi 3 sayi giriniz: ";
	cin >> a >> b >> c;
	
	if(a>=b && a>=c) 
	{
		cout<<"En buyuk sayi: "<<a;
	}
	
	if(b>=a && b>=c) 
	{
		cout<<"En buyuk sayi: "<<b;
	}
	
	if(c>=a && c>=b) 
	{
		cout<<"En buyuk sayi: "<<c;
	}
  	return 0;
}
