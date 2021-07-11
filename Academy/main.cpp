#include "Header.h"

//#define INHERITANCE_BASICS

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef INHERITANCE_BASICS
	/*Human human("�������", "�������", 18);
human.print();*/
	Student stud("�������", "�������", 18, "���", "BV_123", 43.4);
	stud.print();
	Teacher Albert("Einstein", "Albert", 150, "Astrophisics", 120);
	Albert.print();
	cout << Albert.get_last_name() << endl;
	Albert.get_first_name();
#endif // INHERITANCE_BASICS
	//				POINTERS TO BASE CLASS
	Human* group[] =
	{
		new Student("��������", "���������", 23, "���", "��_011", 90),
		new Student("���������", "���������", 25, "���", "��_011", 90),
		new Teacher("������", "����", 36, "���������� ���������� �� C++", 6),
		new Student("�����", "���������", 25, "���", "��_011", 95),
		//new Graduate("��������", "�������", 28, "���", "��_011", 98, "���������� ����������������� ��������� ����"),
		new Teacher("�������", "������", 30, "HardwarePC", 5),
		new Student("����", "������", 22, "���", "��_011", 100),
		new Student("����", "�������", 35, "���", "��_011", 99),
	};

	for (int i = 0; i < sizeof(group) / sizeof(Human*); i++)
	{
		//group[i]->print();
		//cout << *group[i] << endl;
		//cout << typeid(*group[i]).name() << endl;
		if (typeid(*group[i]) == typeid(Student))cout << *dynamic_cast<Student*>(group[i]) << endl;
		if (typeid(*group[i]) == typeid(Teacher))cout << *dynamic_cast<Teacher*>(group[i]) << endl;
		if (typeid(*group[i]) == typeid(Graduate))cout << *dynamic_cast<Graduate*>(group[i]) << endl;
		//cout << delimiter << endl;
	}

	for (int i = 0; i < sizeof(group) / sizeof(Human*); i++)
	{
		delete group[i];
	}
}