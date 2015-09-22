#include "stdafx.h"
#include "Data.h" 

using namespace std;

void Date::setday(int Day)

{
	if (day <= 31){ day = Day; }

}

void Date::setmonth(int Month)
{
	if (month <= 12){ month = Month;}
}

void Date::setyear(int Year)
{
	if (year < 2016){ year = Year; }
}

int Date::getmonth(){ return month; }

int Date::getday(){ return day; }

int Date::getyear() { return year; }

Date::Date() :day(0), month(0), year(0)
{

}

Date::Date(int d,int m,int y) : day(d), month(m), year(y)
{

}

Date::~Date()
{
	day = NULL;
	month = NULL;
	year = NULL;
}
void Date::vivod()
{
	int c;
	cout << "Выберите шаблон для печати: 1-1 декабря 2000 года, 2- 1.12.2000" << endl;
	cin >> c;
	switch (c)
	{
		
	case 1:print1(); break;
	case 2:print2(); break;
	}


}
void Date::vvod()
{
	setlocale(LC_CTYPE, "Russian");

	cout << "Введите день: " << endl;
	cin >> day; 
	setday(day);
	
	cout << "Введите номер месяца:" << endl;
	cin >> month; 
	setmonth(month);
	
	cout << "Введите год: " << endl;
	cin >> year; 
	setyear(year);


}


void Date::vibor_day()

{
	int d;
	cout << "Введите число,которое вам нужно: ";
	cin >> d;
		
		if (day == d)
		{
			  cout << day << "." << month << "." << year << endl;
		}

		else cout << "Такой даты нет";

	

}

void Date::vibor_month()

	{
	int m;
	cout << "Введите месяц,который вам нужен: ";
	cin >> m;
	
		if (month == m)
		{

		 cout << day << "." << month << "." << year << endl;

		}
		else cout<<"Такой даты нет";
	
	
}

void Date::print1()
{
	setlocale(LC_CTYPE, "Russian");

	if (month == 1)  cout << day << "января" << year << "года" << endl;
	if (month == 2) cout << day << "февраля" << year << "года" << endl;
	if (month == 3) cout << day << "марта" << year << "года" << endl;
	if (month == 4) cout << day << "апреля" << year << "года" << endl;
	if (month == 5) cout << day << "мая" << year << "года" << endl;
	if (month == 6) cout << day << "июня" << year << "года" << endl;
	if (month == 7) cout << day << "июля" << year << "года" << endl;
	if (month == 8) cout << day << "августа" << year << "года" << endl;
	if (month == 9) cout << day << "сентября" << year << "года" << endl;
	if (month == 10) cout << day << "октября" << year << "года" << endl;
	if (month == 11) cout << day << "ноября" << year << "года" << endl;
	if (month == 12) cout << day << "декабря" << year << "года" << endl;




}

void Date::print2()

{
	cout << day << "." << month << "." << year << endl;

	

}

bool Date::proverka()

{
	if ((day + month + year) % 2 == 0) return true;

	else return false;

}
