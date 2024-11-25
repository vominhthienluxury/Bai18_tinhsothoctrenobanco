// bai_18Tinhsothoctrenbanco.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
	int SoO, sothoc;
	cout << "nhap so O : \n"; cin >> SoO;
	cout.imbue(locale("en_US.UFT-8")); 
	double tongsothoc = 0;
	sothoc = 0;
	if (SoO > 64) {
		cout << "tren ban co chi co 64 O , vui long nhap so <=64\n";
		system("pause");
		return 0;
	}
	for (int i = 0; i < SoO; i++)
	{
		tongsothoc = tongsothoc + pow(2, i);
		cout << "othu" << i << ":" << tongsothoc << endl;
	}
	cout << " tong so thoc tren ban co: " << tongsothoc << endl;
	cout << "tong so thoc tren ban co:" << fixed << setprecision(0) << tongsothoc << endl;
	return 0;
}
