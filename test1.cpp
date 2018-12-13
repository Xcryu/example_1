#include"test1.h"
Graduate::Graduate(char *na, char *nu, int sc, char *re, char *tu)//自力更生构造函数模式重载
{
	strcpy(name, na);
	strcpy(number, nu);
	score = sc;
	strcpy(researchField, re);
	strcpy(tutor, tu);
}
Graduate::Graduate(const Graduate &firstone)//拿来主义拷贝构造函数模式重载
{
	strcpy(this->name, firstone.name);
	strcpy(this->number, firstone.number);
	this->score = firstone.score;
	strcpy(this->researchField, firstone.researchField);
	strcpy(this->tutor, firstone.tutor);
}
Graduate::~Graduate()//析构函数
{
	if (name)
	{
		delete[]name;
	}
}
void Graduate::Input()
{
	cout << "输入姓名：";
	cin >> name;
	cout << "输入学号：";
	cin >> number;
	cout << "输入成绩：";
	cin >> score;
	cout << "输入研究领域：";
	cin >> researchField;
	cout << "输入导师：";
	cin >> tutor;
}
void Graduate::Display()
{
	cout << "姓名:" << name << endl;
	cout << "学号:" << number << endl;
	cout << "成绩：" << score << endl;
	cout << "研究领域：" << researchField << endl;
	cout << "导师：" << tutor << endl;
}