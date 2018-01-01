#include<iostream>

using namespace std;
 
int main()
{
	int no, rev = 0, r, a;
	cout << "Bir sayi giriniz: "; 
	cin >> no;
	a = no;
	
	while(no>0)
	{
		r=no%10;
		rev=rev*10+r;
		no=no/10;
	}
	
	cout << "\n" << a <<" tersi: " << rev;
	
  	return 0;
}
