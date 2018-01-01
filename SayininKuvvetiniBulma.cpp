#include<iostream>

using namespace std;
 
int main()
{
	float b, p, i, pow = 1;
	cout << "Tabani ve kuvveti giriniz : ";
	cin >> b >> p;
	if(p>0)
	{
		for(i=p;i>0;i--)
		{
			pow=pow*b;
		}
	}
	else if(p<0)
	{
		p=p * -1;
		
		for(i=p;i>0;i--)
		{
			pow=pow*b;
		}
		
		pow=1/pow;
	}
	else if(p==0)
	{
		pow=1;
	}
	cout<<"Sonuc: "<<pow;
	return 0;
}
