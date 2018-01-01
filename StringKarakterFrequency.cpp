#include<iostream>

using namespace std;
 
int main()
{
	int i, count=0;
	char ch[20] , c;
	
	cout << "Bir ifade giriniz: ";
	gets(ch);
	
	cout << "Ifadenin icinde gecen bir karakter giriniz: ";
	cin>>c;
	
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]==c)
		count++;
	}
	if(count==0)
	{
		cout << "Girilen karakter bulunamadi";
	}
	else
	{
		cout<<"Bulunan " << c << " " << count << " tane";
	}
	return 0;
}
