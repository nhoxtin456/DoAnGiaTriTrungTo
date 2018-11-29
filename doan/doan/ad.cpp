#include <math.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <iostream>

using namespace std;
#define MAX 200

void tinhTong2So(int a, int b);

void main()
{
	int a;
	int b;
	int c;
	int d;
	
	cout << "Nhap vao a: " << endl;
	cin >> a;
	cout << "Nhap vao b: " << endl;
	cin >> b;	
	tinhTong2So(a, b);
	cout << "Tong cua 2 so la: " << endl;
	cout << endl;
}

void tinhTong2So(int a, int b)
{	
	int tong = a + b;	
}