#include<iostream>
#include<string>
using namespace std;
class Graduate
{
private:
	char name[20];//姓名
	char number[10];//学号
	int score;//分数
	char researchField[50];//研究领域
	char tutor[20];//导师
public:
	Graduate(char *name, char *number, int score, char *researchField, char *tutor);//自力更生构造函数模式
	Graduate(const Graduate& firstone);//拿来主义拷贝构造函数模式
	~Graduate();
	char *GetName();//获取姓名
	char *GetNumber();//获取学号
	int GetScore();//获取成绩
	char *GetResearchField();//获取研究领域
	char *GetTutor();//获取导师
	void Display();//输出研究生单项信息
	void Input();//输入研究生信息
};
