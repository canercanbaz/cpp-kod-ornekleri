#include<iostream>

using namespace std;
 
int main()
{
	float cel, far;
	cout << "Fahrenheit: ";
	cin >> far;
	cel = (far - 32) * 5/9;
	cout << "Celsius: " << cel;
	return 0;
}
