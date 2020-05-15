/* Написать программу, которая сравнивает два введенных с клавиатуры числа. 
Программа должна указать, какое число больше, или, если числа равны, вывести соответствующее сообщение. */

#include <iostream>

using std::cin; using std::cout; using std::endl;

// получаем от пользователя число
int get_number()
{
	int number;
	cin >> number;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Вы ввели что-то не очень похожее на число, придётся повторить ввод!" << endl;
		cout << "Если ошибка в первом числе, то введите оба числа заново, иначе нужно ввести только второе: " << endl;
		cin >> number;
	}
	return number;
}

// выводим результат сравнения двух чисел
void compare(const int number1, const int number2)
{
	if (number1 > number2)
		cout << number1 << " больше, чем " << number2 << endl;
	else if (number1 < number2)
		cout << number1 << " меньше, чем " << number2 << endl;
	else if (number1 == number2)
		cout << "Числа равны!"<< endl;
	cout << endl;
}

int main()
{
	setlocale(LC_CTYPE, "rus");  // для вывода сообщений на кириллице

	while (true)
	{
		cout << "Введите два числа: ";
		compare(get_number(), get_number());
	}
	return 0;
}