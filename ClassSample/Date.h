
#ifndef Date_H //��Date_Hδ���� Date_Hֻ����������ʼ����ʶ�����Ѿ������ˣ��Ͳ�����������
#define Date_H //����Date_H
//����һ������Ҫ�ֺŽ�β
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

#endif;//endifҲ��Ҫ�ֺŽ�β