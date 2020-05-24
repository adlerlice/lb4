#include <iostream>

using namespace std;

//Прототип функции нахождение N-ого члена арифметической прогрессии

int Func(int a, int n);

int main()

{

	//Задаём первое число

	int a;

	cout << "Enter number A:";

	cin >> a;

	//Задаём номер числа, которое мы хотим найти

	int n;

	cout << endl << "Enter N:";

	cin >> n;

	//Функция нахождения n-ого числа арифметической прогрессии

	int An = Func(a, n);

	cout << endl << "Result: " << An << endl;

	return 0;

}

int Func(int a, int n)

{

	//Когда мы дошли до n-ого числа, вернём получившееся число

	if (n == 0)

		return a;

	else

	{

		//Добавляем к нашему числу разность d

		a += 5;

		n--; //Делаем ещё один "шаг" в сторону нашего числа

		return Func(a, n); //Возвращаем результат функции от следующего числа

	}

}