#include<iostream>
#include<cmath>

using namespace std;
 
int main()
{
	int num, ans;
	cout << "Herhangi bir sayi giriniz: "; 
	cin >> num; 
	ans = pow(num, 1.0/3.0);
	ans++;
	cout << "\n" << num << " Sayisinin Kupkoku: " << ans; 
	return 0;
}
