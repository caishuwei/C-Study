#include "pch.h"
#include <iostream>
#include "Date.h"

//Date类的函数实现
Date::Date() {
	_year = 1970;
	_month = 1;
	_day = 1;
}

Date::Date(int year,int month,int day) {
	_year = year;
	_month = month;
	_day = day;
}

Date::~Date() {
	_year = 0;
	_month = 0;
	_day = 0;
}

void Date::setYear(int year) {
	_year = year;
}

int Date::getYear() {
	return _year;
}

void Date::setMonth(int month) {
	_month = month;
}

int Date::getMonth() {
	return _month;
}

void Date::setDay(int day) {
	_day = day;
}

int Date::getDay() {
	return _day;
}

void Date::print() {
	printf("%4d%02d%02d\n",_year,_month,_day);
}