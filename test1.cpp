#include"test1.h"
Graduate::Graduate(char *na, char *nu, int sc, char *re, char *tu)//�����������캯��ģʽ����
{
	strcpy(name, na);
	strcpy(number, nu);
	score = sc;
	strcpy(researchField, re);
	strcpy(tutor, tu);
}
Graduate::Graduate(const Graduate &firstone)//�������忽�����캯��ģʽ����
{
	strcpy(this->name, firstone.name);
	strcpy(this->number, firstone.number);
	this->score = firstone.score;
	strcpy(this->researchField, firstone.researchField);
	strcpy(this->tutor, firstone.tutor);
}
Graduate::~Graduate()//��������
{
	if (name)
	{
		delete[]name;
	}
}
void Graduate::Input()
{
	cout << "����������";
	cin >> name;
	cout << "����ѧ�ţ�";
	cin >> number;
	cout << "����ɼ���";
	cin >> score;
	cout << "�����о�����";
	cin >> researchField;
	cout << "���뵼ʦ��";
	cin >> tutor;
}
void Graduate::Display()
{
	cout << "����:" << name << endl;
	cout << "ѧ��:" << number << endl;
	cout << "�ɼ���" << score << endl;
	cout << "�о�����" << researchField << endl;
	cout << "��ʦ��" << tutor << endl;
}