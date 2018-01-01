#include<iostream>

using namespace std;
 
int main()
{
	char str1[20], str2[20], i, j, flag=0;
	cout << "Birinci ifadeyi giriniz: ";
	gets(str1);
	cout << "Ikinci ifadeyi giriniz: ";
	gets(str2);
	i=0;
	j=0;
	while(str1[i]!='\0')
	{
		i++;
	}
	
	while(str2[j]!='\0')
	{
		j++;
	}
	
	if(i!=j)
	{
		flag=0;
	}
	else
	{
		for(i=0,j=0;str1[i]!='\0',str2[j]!='\0';i++,j++)
		{
			if(str1[i]==str2[j])
			{
				flag=1;
			}
		}
	}
	
	if(flag==0)
	{
		cout<<"Ifadeler ayni degil.";
	}
	else
	{
		cout<<"Ifadeler ayni.";
	}
	return 0;
}
