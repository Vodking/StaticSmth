#include<iostream>
#include<cstdlib>
#include<string>
#include <Windows.h>
#include<iomanip>

/*
static - �������� �����, ������� ���������� ��������� ��������� ������ ��� �������� ������ ���� ���.
� ������� static ���������� ����� ��������� ���� �������� �� ����� ���������.
*/
//������
void Count()
{
	static int count = 0;
	std::cout << count;
	count++;
}

void Count2()
{
	int count = 0;
	std::cout << count;
	count++;
}

/*
���� ��� ���������� ���������� �������� ������ const �� ��� ������� ���������� ����� ���� ���������,
� ���� ������������ static const �� � ������� ���������� ����� �������� ���� ���������.
��� ����� �� ������� �����������.
*/

struct MyStruct
{
	const int fingers = 5;
};

struct MyStruct2
{

	static const int fingers = 5;
	
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int choice;
	do
	{
		std::cin >> choice;
	} while (choice > 3 || choice < 0);
	if (choice == 1)
	{
		std::cout << "������� �� static ����������\n";
		for (int i = 0; i < 10; i++)
		{
			Count();
		}
		std::cout << "\n������� ��� static ����������\n";
		for (int i = 0; i < 10; i++)
		{
			Count2();
		}
	}
	else if(choice == 2)
	{
		MyStruct first;
		MyStruct second;
		MyStruct2 first2;
		MyStruct2 second2;
		
		std::cout << "����� ����� �������:" << &first.fingers;
		std::cout << "\n����� ����� �������:" << &second.fingers;

		std::cout << "\n����� ������ ����� �������:" << &first2.fingers;
		std::cout << "\n����� ������ ����� �������:" << &second2.fingers;
	}
	
}


