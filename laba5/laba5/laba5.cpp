#include <iostream>
using namespace std;
void main() {
	setlocale(LC_CTYPE, "Russian");
	int a, x, c, sum = 0;
	cout << "Введите число x ";
	cin >> x;
	cout << "Введите число a (от 0 до 8) ";
	cin >> a;
	while (x) 
	{
	c = x % 10;
	if (c > a) sum += c;
	x /= 10;
	}
	cout << "Сумма цифр равна " << sum << endl;
}