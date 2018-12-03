#include "pch.h"
#include "Birthday.h"
#include <string.h>
#include <iostream>

//���캯�������ں�����ų�ʼ�����࣬��д����Ĭ�ϵ����޲ι��캯�����������û���޲ι��캯�����򱨴�
Birthday::Birthday(char * msg):Date(2018,12,3) {
	setMsg(msg);
}

Birthday::~Birthday() {
	//�ͷ��ַ���ռ�õ��ڴ�
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
	//��ָ��תΪ����ָ�룬print������Ϊ���ຯ���ĵ��ã��������ﲻ��ѭ����ջ���
	Date * d = this;
	d->print();
	printf(_msg);
}