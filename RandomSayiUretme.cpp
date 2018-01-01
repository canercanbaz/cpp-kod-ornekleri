#include<iostream>
#include<stdlib.h>
#include<time.h>
 
using namespace std;
 
int main() 
{
    setlocale(LC_ALL,"Turkish"); // Türkçe karakter sorunu düzeltme
    int birinciSayi , ikinciSayi , ucuncuSayi;
    srand(time(NULL));
    birinciSayi = rand() % 100;
    ikinciSayi = rand() % 400 + 100;
    ucuncuSayi = rand() % 499 + 500;
    cout << "1. Sayý (0 ile 99 arasýnda): " << birinciSayi << endl;
    cout << "2. Sayý (100 ile 500 arasýnda): " << ikinciSayi << endl;
    cout << "3. Sayý (500 ile 999 arasýnda): " << ucuncuSayi;
    return 0;
}
