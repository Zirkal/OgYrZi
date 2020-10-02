#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int n = 0;
	cout << "¬ведите n: "; cin >> n;
	if (n < 12)
		cout << n << " мес€цев" << endl;
	else if (n < 60 || (n / 12) % 10 <= 4 && (n / 12) % 10 >1)
		cout << n / 12 << " годa " << n % 12 << " мес€цев" << endl;
	else if (n >= 60 && n < 252 || (n / 12) % 10 >= 5 || (n / 12) % 10 == 0 )
		cout << n / 12 << " лет " << n % 12 << " мес€цев" << endl;
	else if((n/12)%10 == 1 )
		cout << n / 12 << " год " << n % 12 << " мес€цев" << endl;
	system("pause");
}