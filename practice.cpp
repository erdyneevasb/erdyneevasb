#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int i;
	cout << "введите 1 для сложения # 2 для соедиения # 3 для умножения  # 4 для вычитания # 5 для деления " << endl;
	cin >> i;
	if (i < 1 or i > 5)
	{
		cout << "Некорректная команда" << endl;
	}

	if (i == 1)
	{
		int a1, b1, c1;
		cout << "введите 1-ое число:" << endl;
		cin >> a1;
		cout << "введите 2-ое число:" << endl;
		cin >> b1;
		c1 = a1 + b1;
		cout << "сумма двух чисел: " << c1 << endl;
	}

	if (i == 2)
	{
		string a1, b1, c1;
		cout << "введите 1-ую строку:" << endl;
		cin >> a1;
		cout << "введите 2-ую строку:" << endl;
		cin >> b1;
		c1 = a1 + " и " + b1;
		cout << "сумма двух строк: " << c1 << endl;
	}

	if (i == 3)
	{
		int a1, b1, c1;
		cout << "введите 1-ое число:" << endl;
		cin >> a1;
		cout << "введите 2-ое число:" << endl;
		cin >> b1;
		c1 = a1 * b1;
		cout << "произведения двух чисел: " << c1 << endl;
	}

	if (i == 4)
	{
		float a1, b1, c1; 
		cout << "введите 1-ое число:" << endl;
		cin >> a1;
		cout << "введите 2-ое число:" << endl;
		cin >> b1;
		c1 = a1 - b1;
		cout << "разность двух чисел: " << c1 << endl;
	}
if (i == 5)
	{
		float a1, b1, c1;
		cout << "введите 1-ое число:" << endl;
		cin >> a1;
		cout << "введите 2-ое число:" << endl;
		cin >> b1;
		c1 = a1 / b1;
		cout << "частное двух чисел: " << c1 << endl;

}
