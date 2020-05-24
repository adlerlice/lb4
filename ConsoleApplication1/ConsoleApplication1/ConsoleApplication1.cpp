#include <iostream>

using namespace std;

//Прототипы функций

int F(int n);

int G(int n);

int main()

{

	//Выводим результаты работы функции F от аргументов 1,2,...,10

	cout << "Numbers of F(n):" << endl;

	for (int i = 1; i < 11; i++)

		cout << F(i) << " ";

	cout << endl;

	//Выводим результаты работы функции G от аргументов 1,2,...,10

	cout << endl << "Numbers of G(n)" << endl;

	for (int i = 1; i < 11; i++)

		cout << G(i) << " ";

	return 0;

}

int F(int n)

{

	if (n == 1) //Если n равно 1, возвращаем -2

		return -2;

	else //Иначе вызывается выражение с рекурсией

		return 4 * F(n - 1) * G(n - 1);

}

//Принцип работы тот же, что и в функции F

int G(int n)

{

	if (n == 1)

		return 1;

	else

		return 5 * F(n - 1) + G(n - 1);

}