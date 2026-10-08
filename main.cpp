#include <iostream>
#include <cmath> // Бібліотека математичних функцій
using namespace std;

int main()
{
	// Integer 8
	// Дано двозначне число.
	// Вивести число, отримане при перестановці цифр вихідного числа.
	cout << "Integer 8" << endl;
	int number; // Декларація змінної
	cout << "Enter two-digit number: " << endl;
	cin >> number; // Введення данних
	// Розрахунок
	int a = number % 10; // Знаходження десяток
	int b = number / 10; // Знаходження одиниць
	// Результат
	int result = a * 10 + b;
	// Вивидення результату
	cout << "Result: " << result << endl;
	cout << endl;


	// Boolean 29
	// Дано числа x, y, x1, y1, x2, y2.
	// Перевірити істинність висловлювання: «Точка з координатами(x, y) лежить усередині прямокутника, ліва верхня вершина якого має координати(x1, y1), права нижня - (x2, y2), а сторони паралельні координатним осях».
	cout << "Boolean 29" << endl;
	int x, y, x1, y1, x2, y2; // Декларація змінних
	// Введення данних
	cout << "Enter x, y: " << endl;
	cin >> x >> y;
	cout << "Enter x1, y1: " << endl;
	cin >> x1 >> y1;
	cout << "Enter x2, y2: " << endl;
	cin >> x2 >> y2;
	// Розрахунок результату
	bool is_true = (x >= x1 && x <= x2) && (y >= y2 && y <= y1); // Перевірка умови задачі
	// Вивидення результату
	cout << "Result: " << is_true << endl;
	cout << endl;


	// Equation 33
	cout << "Equation 33" << endl;
	const double pi = 3.141592; // Декларація константи pi
	double x_1; // Декларація змінної
	cout << "Enter x: " << endl;
	cin >> x_1; // Введення данних
	// Розрахунки
	double top = 2 * exp(x_1 + 0.5); // Частина чисельника
	double top_module = abs(3*x_1 - 2*tan(5*x_1 - (43 * pi / 180))); // Модуль чисельника
	double bottom_sqrt = cbrt(pow(sin(pow(x_1, 3)), 2)); // Корінь знаменника
	double bottom_log = log(abs(pow(x_1, 3))) / log(5); // Логарифм знаменника
	// Розрахунок результату
	double equation = (top * sqrt(top_module)) / (bottom_sqrt * bottom_log);
	// Результат
	cout << "Result: " << equation;

	return 0;
}