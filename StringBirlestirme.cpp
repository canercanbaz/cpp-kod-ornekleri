#include<iostream>
#include<cstring>
 
using namespace std;

int main()
{
	char ch1[50] = "caner";
	char ch2[50] = "canbaz";
	cout << "1. Ifade: " << ch1;
	cout << "\n2. Ifade: " << ch2;
	strcat(ch1,ch2);
	cout << "\nBirlestirilmis ifade : " << ch1;
	return 0;
}
