#pragma once
#include <iostream>
#include <ctime>  

class Date {   

	int day;     
	int month;
	int year;    
public:
	Date();
	Date(int, int, int);
//	Date(Date &);
	~Date();
	
void setday(int);//    
void setmonth(int);//
void setyear(int);
int getday();//      
int getmonth();//   
int getyear();
void print1();
void print2();
void vvod();
void vivod(); 
void vibor_day();
void vibor_month();
bool proverka();
};
