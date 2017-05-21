//1_4.Дано натуральное число N.Представить N в виде A + B, так, что НОД(A, B) максимален, A ≤ B.
//Вывести A и B.Если возможно несколько ответов - вывести ответ с минимальным A. n ≤ 107.

#include <iostream>
#include <cmath>

void solveTask(int *p1, int *p2, int *p3);	// Главная функция в которой производятся вычисления
double sqrt(double val);

int main(void)
{

	int n = 0;	// Создание и инициализация переменной для входных данных
	std::cin >> n;	// Ввод значения N

	int a = 0, b = 0;
	// Создание и инициализация переменных для передачи данных в функцию решения
	solveTask(&a, &b, &n);
	// Вызов функции с решением, передача ссылки на переменные a и b для вывода, n для ввода

	std::cout << a << " " << b; // Вывод результата работы

}


void solveTask(int *p1, int *p2, int *p3) // Главная функция в которой производятся вычисления
// *p1 для значения a, *p2 для значения b, *p3 для вывода конечного значения 
{
	
	int a = 0, b = 0, n = *p3;				// Передача значений 0,0,*p3 в соответствующие пременные
	// Для удобной работы с ними в дальнейшем

	int i = 0;								// Счётчик цикла

	int SqrtOfN = (int) sqrt(n) + 1;		// Получили корень из N

	for (i = 2; i < SqrtOfN; i++)			// Ищем минимальный делитель n
	{
		if (n % i == 0)						// Как только нашли - присваиваем и выходим из цикла
		{
			a = n / i;
			b = n - a;
			break;
		}
	}


	if (a == 0)								// Если простое
	{
		a = 1;
		b = n-1;
	}

		
	*p1 = a;								// Вывод a в главную функцию
	*p2 = b;								// Вывод b в главную функцию

}