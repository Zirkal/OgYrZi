// 2_5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int a = rand() % 899 + 100;
	cout << "Ваше число: "<< a << endl;

	switch (a / 100)
	{
	case 1: cout << "Сто"; break;
	case 2: cout << "Двести"; break;
	case 3: cout << "Тристо"; break;
	case 4: cout << "Четыресто"; break;
	case 5: cout << "Пятсот"; break;
	case 6: cout << "Шестьсот"; break;
	case 7: cout << "Семьсот"; break;
	case 8: cout << "Восемьсот"; break;
	case 9: cout << "Девятьсот"; break;
	}
	switch ((a / 10) % 10)
	{
	case 1:
		switch (a % 10)
		{
		case 0: cout << " десять"; break;
		case 1: cout << " одинадцать"; break;
		case 2: cout << " двенадцать"; break;
		case 3: cout << " тринадцать"; break;
		case 4: cout << " четырнадцать"; break;
		case 5: cout << " петнадцать"; break;
		case 6: cout << " шестнадцать"; break;
		case 7: cout << " семнадцать"; break;
		case 8: cout << " восемнадцать"; break;
		case 9: cout << " девятнадцать"; break;
		}
		break;
	case 2: cout << " двадцать"; break;
	case 3: cout << " тридцать"; break;
	case 4: cout << " сорок"; break;
	case 5: cout << " пятьдесят"; break;
	case 6: cout << " шестьдесят"; break;
	case 7: cout << " семьдесят"; break;
	case 8: cout << " восемьдисят"; break;
	case 9: cout << " девяносто"; break;
	}
	switch ((a / 10) % 10)
	{
	case 0:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:

		switch (a % 10)
		{
		case 1: cout << " один"; break;
		case 2: cout << " два"; break;
		case 3: cout << " три"; break;
		case 4: cout << " четыри"; break;
		case 5: cout << " пять"; break;
		case 6: cout << " шесть"; break;
		case 7: cout << " семь"; break;
		case 8: cout << " восемь"; break;
		case 9: cout << " девять"; break;
		}
		break;
	}
	
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
