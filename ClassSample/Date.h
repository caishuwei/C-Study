
#ifndef Date_H //若Date_H未定义 Date_H只是用来做初始化标识，若已经定义了，就不会再走下面
#define Date_H //定义Date_H
//定义一个类需要分号结尾
class Date{
private:
	int _year;
	int _month;
	int _day;

public: 
	Date();
	Date(int year, int month, int day);
	~Date();

	void setYear(int year);
	int getYear();
	void setMonth(int month);
	int getMonth();
	void setDay(int day);
	int getDay();

	void print();
};

#endif;//endif也需要分号结尾