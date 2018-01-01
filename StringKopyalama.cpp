#include<iostream>
#include<cstring>

using namespace std;

int  main()
{
	char s1[10], s2[10];
	cout << "1. ifadeyi giriniz s1: ";
	cin >> s1;
	strcpy(s2, s1);
	cout << "s2 degiskeni : " << s2;
	return 0;	
}
