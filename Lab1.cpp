#include "stdafx.h"
#include "Data.h" 
#include <iostream> 
#include <locale>
using namespace std;  

const int size = 2;

void dmy(Date *fi)
{
	
	for (int i = 0; i < size; i++)
	{
		if (fi[i].proverka() == true) fi[i].print2();

	}
}


int _tmain(int argc, _TCHAR* argv[])
{
	int s;
	 

	Date k;
	Date *z = new Date();

	Date f[size] = { Date(14, 6, 2013), Date(12, 12, 2012) };

	dmy(f);

	setlocale(LC_CTYPE, "Russian");

	/*cout << "1-Ввод даты" << endl;
	cout << "2-Вывод даты" << endl;
	cout << "3-Проверка по заданному дню" << endl;
	cout << "4-Проверка по заданному месяцу" << endl;
	cout << "5-Проверка на четность" << endl;*/



	
	
}
