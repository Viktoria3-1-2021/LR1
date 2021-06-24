﻿//Ввод символа с клавиатуры(с проверкой что это именно символ), ввод строки с клавиатуры(с проверкой что это именно строка).Вывод в консоль номера, который символ занимает в строке, если он там есть.Если нет — вывод сообщения об отсутствии символа.
#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	char s; int k = 0; int n = 0;
	do {
		cout << "Введите символ:" << endl;
		cin >> s;
		if ((isalpha(s) == 0)) //ф-я проверки символа;
			cout << "Ошибка.Введен не символ" << endl;
	} while (isalpha(s) == 0);
	char str[6];
	cout << "Введите символ строки :" << endl;
	for (int i = 0; i < 5; i++)
	{
		do {

			cin >> str[i];
			if (isalpha(str[i]) == 0)                //посимвольная проверка ввода строки;
			{
				cout << "Ошибка. Введите символ:" << endl;
			}

		} while (isalpha(str[i]) == 0);
	}
	str[5] = '/0'; //конец строки;
	for (int i = 0; i < strlen(str) - 1; i++)
	{
		if (str[i] == s)  //поиск символа и запоминание его позиции; 
			n = i;
	}
	if (n > 0)  //если символ есть, выводится его номер;
		cout << "Символ занимает" << " " << n + 1 << " " << "место в строке";
	else //в противном случае выводится следующее:
		cout << "Данного символа нет в строке";
	system("pause");
	return 0;
}
