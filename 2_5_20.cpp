#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int n = 0;
	cout << "������� n: "; cin >> n;
	if (n < 12)
		cout << n << " �������" << endl;
	else if (n < 60 || (n / 12) % 10 <= 4 && (n / 12) % 10 >1)
		cout << n / 12 << " ���a " << n % 12 << " �������" << endl;
	else if (n >= 60 && n < 252 || (n / 12) % 10 >= 5 || (n / 12) % 10 == 0 )
		cout << n / 12 << " ��� " << n % 12 << " �������" << endl;
	else if((n/12)%10 == 1 )
		cout << n / 12 << " ��� " << n % 12 << " �������" << endl;
	system("pause");
}