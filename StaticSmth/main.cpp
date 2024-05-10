#include<iostream>
#include<cstdlib>
#include<string>
#include <Windows.h>
#include<iomanip>

/*
static - ключевое слово, которое заставляет программу выделаять память для элемента только один раз.
В функции static переменная будет сохранять свои значения до конца программы.
*/
//Пример
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
Если при обьявлении переменной написать просто const то для каждого экземпляра будет своя константа,
а если использовать static const то у каждого экземпляра будет выделена одна константа.
это видно по адресам константной.
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
		std::cout << "Функция со static переменной\n";
		for (int i = 0; i < 10; i++)
		{
			Count();
		}
		std::cout << "\nФункция без static переменной\n";
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
		
		std::cout << "Адрес конст первого:" << &first.fingers;
		std::cout << "\nАдрес конст второго:" << &second.fingers;

		std::cout << "\nАдрес статик конст первого:" << &first2.fingers;
		std::cout << "\nАдрес статик конст второго:" << &second2.fingers;
	}
	
}


