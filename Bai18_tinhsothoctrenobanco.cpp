// Bai18_tinhsothoctrenobanco.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "|Tinh so hat thoc tren ban co|\n";
    double o, tongthoc=0,tong=0;
    cout << "nhap o :";
    cin >> o; 
    tongthoc = 0;
    for (int i=1;i <= o; i++)
    {
        tongthoc = pow(2, i-1);
        tong += tongthoc;
        cout << "o " << i << ": " << tongthoc << endl; 
    }
    cout << "Tong so thoc : " << tong << endl;
    return 0;
}

