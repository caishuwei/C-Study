
#ifndef BIRTHDAY_H
#define BIRTHDAY_H
#include "Date.h"
//类的继承，C++允许多继承，继承可以添加修饰符，修改继承来的父类变量与函数访问权限
class Birthday : private Date {
	//新增变量
private:
	char* _msg;

public:
	Birthday(char * msg);
	~Birthday();

	//新增自己的方法
	void setMsg(char* msg);
	char* getMsg();

	//这里可以复写父类函数
	void print();
};


#endif // !1

