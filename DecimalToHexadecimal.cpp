#include<iostream>

using namespace std;
 
int main()
{
	int num, rem[20], hex = 0, i = 0, j;
	cout << "Herhangi bir sayi giriniz: ";
	cin >> num;
	while(num>0)
	{
		rem[i] = num % 16;
		num = num / 16;
		i++;
	}
	cout << "Hexadecimal: ";
	for(j = i - 1 ; j >= 0 ; j--)
	{
		switch(rem[j])
		{
			case 10:
				cout<<"A";
				break;
			case 11:
				cout<<"B";
				break;
			case 12:
				cout<<"C";
				break;
			case 13:
				cout<<"D";
				break;
			case 14:
				cout<<"E";
				break;
			case 15:
				cout<<"F";
				break;
			default:
			cout << rem[j];
		}
	}	
	return 0;
}
