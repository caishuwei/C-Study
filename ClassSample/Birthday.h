
#ifndef BIRTHDAY_H
#define BIRTHDAY_H
#include "Date.h"
//��ļ̳У�C++�����̳У��̳п���������η����޸ļ̳����ĸ�������뺯������Ȩ��
class Birthday : private Date {
	//��������
private:
	char* _msg;

public:
	Birthday(char * msg);
	~Birthday();

	//�����Լ��ķ���
	void setMsg(char* msg);
	char* getMsg();

	//������Ը�д���ຯ��
	void print();
};


#endif // !1

