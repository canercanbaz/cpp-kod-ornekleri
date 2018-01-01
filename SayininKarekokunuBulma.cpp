#include<iostream>
#include<cmath>

using namespace std;
 
int main()
{
	int num, ans;
	cout << "Herhangi bir sayi giriniz: "; 
	cin >> num; 
	ans = pow(num, 0.5);
	cout << "\n" << num << " Sayisinin Karekoku: " << ans; 
	return 0;
}
