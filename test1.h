#include<iostream>
#include<string>
using namespace std;
class Graduate
{
private:
	char name[20];//����
	char number[10];//ѧ��
	int score;//����
	char researchField[50];//�о�����
	char tutor[20];//��ʦ
public:
	Graduate(char *name, char *number, int score, char *researchField, char *tutor);//�����������캯��ģʽ
	Graduate(const Graduate& firstone);//�������忽�����캯��ģʽ
	~Graduate();
	char *GetName();//��ȡ����
	char *GetNumber();//��ȡѧ��
	int GetScore();//��ȡ�ɼ�
	char *GetResearchField();//��ȡ�о�����
	char *GetTutor();//��ȡ��ʦ
	void Display();//����о���������Ϣ
	void Input();//�����о�����Ϣ
};
