#include<iostream>

using namespace std;
 
int main()
{
	float cel, far;
	cout << "Celsius: ";
	cin >> cel;
	far = cel * 9/5 + 32;
	cout << "Fahrenheit: " << far;
	return 0;
}
