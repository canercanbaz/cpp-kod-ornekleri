#include<iostream>

using namespace std;
 
int main()
{
	int no, rem[20], i = 0, j;
	cout << "Herhangi bir sayi giriniz: ";
	cin >> no;
	while(no>0)
	{
		rem[i]=no%2;
		i++;
		no=no/2;
	}
	
	cout << "Binary:";
	
	for(j=i-1; j>=0; j--)
	{
		cout << rem[j];
	}
	return 0;
}
