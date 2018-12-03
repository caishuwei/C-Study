#include "pch.h"
#include "Birthday.h"
#include <string.h>
#include <iostream>

//构造函数可以在后面跟着初始化父类，不写就是默认调用无参构造函数，如果父类没有无参构造函数，则报错
Birthday::Birthday(char * msg):Date(2018,12,3) {
	setMsg(msg);
}

Birthday::~Birthday() {
	//释放字符串占用的内存
	delete _msg;
}

void Birthday::setMsg(char* msg) {
	int len = strlen(msg);
	_msg = new char[len+1];
	strcpy_s(_msg, len + 1, msg);
}
char* Birthday::getMsg() {
	return _msg;
}

void Birthday::print() {
	//将指针转为父类指针，print函数则为父类函数的调用，所以这里不会循环到栈溢出
	Date * d = this;
	d->print();
	printf(_msg);
}