#include<iostream>

using namespace std;
 
int main()
{
	int i, count=0;
	char ch[20];
	cout << "Herhangi bir ifade giriniz: ";
	gets(ch);
	
	for(i=0;ch[i]!='\0';i++)
	{
		count++;
	}
	
	cout<<"Ifadenin Uzunlugu: " << count;
	return 0;
}
