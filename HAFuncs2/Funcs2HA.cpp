#include <iostream>

//Сумма пяти чисел
int sum_of_five(int num1, int num2, int num3, int num4, int num5) {
	int sum = num1 + num2 + num3 + num4 + num5;
	return sum;
}

//Среднее арифметическое - встраиваемая функция
inline int arithm(int num1, int num2, int num3) {
	int sum = num1 + num2 + num3;
	int abs = sum / 3;
	return abs;
}

//Максимальное из трех значений - перегруженная функция
int maximum(int num1, int num2) {
	return num1 > num2 ? num1 : num2;
}
short maximum(short num1, short num2) {
	return num1 > num2 ? num1 : num2;
}
double maximum(double num1, double num2) {
	return num1 > num2 ? num1 : num2;
}
int maximum(int num1, int num2, int num3) {
	std::cout << "Тип значения - INT\n";
	return maximum(num1, maximum(num2, num3));
}
short maximum(short num1, short num2, short num3) {
	std::cout << "Тип значения - SHORT\n";
	return maximum(num1, maximum(num2, num3));
}
double maximum(double num1, double num2, double num3) {
	std::cout << "Тип значения - DBL\n";
	return maximum(num1, maximum(num2, num3));
}

//Шаблон - вывод массива
template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << "[";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}

//Шаблон - простое число
template <typename T>
int prime_arr(T arr[], const int length) {
	for (int i = 0; i < length; i++)
		for (int j = 2; j <= arr[i] / 2; j++) {
			if (arr[i] % j == 0 && arr[i] != j) {
				arr[i] = 0;
				break;
			}
			if (arr[i] != 0) {
				std::cout << arr[i] << " \n";
				break;
				return 1; //Понятия не имею, как из выводимиых чисел убрать 6, и сделать так, чтобы показывало только одно просто число, а не два (а в массиве их 4). Может, функция не та?
			}
		}
}


int main() {
	setlocale(LC_ALL, "Russian");
	
	//Задание 1
	std::cout << "Задание 1: Функция суммы\n";
	int n11, n12, n13, n14, n15; //Чтобы не запутаться, у переменной число после нее - номер задания, второе число - номер переменной
	std::cout << "Первое число: ";
	std::cin >> n11;
	std::cout << "Второе число: ";
	std::cin >> n12;
	std::cout << "Третье число: ";
	std::cin >> n13;
	std::cout << "Четвертое число: ";
	std::cin >> n14;
	std::cout << "Пятое число: ";
	std::cin >> n15;
	std::cout << "Сумма пяти чисел:\n" << sum_of_five(n11, n12, n13, n14, n15) << std::endl;

	//Задание 2
	std::cout << "Задание 2: Встраиваемая функция\n";
	int n21, n22, n23;
	std::cout << "Первое число: ";
	std::cin >> n21;
	std::cout << "Второе число: ";
	std::cin >> n22;
	std::cout << "Третье число: ";
	std::cin >> n23;
	std::cout << "Среднее арифметическое трех чисел: " << arithm(n21, n22, n23) << std::endl;

	//Задание 3
	std::cout << "Задание 3: Перегруженная функция\n";
	int n31 = 5, n32 = 8, n33 = 3;
	short s31 = 6, s32 = 3, s33 = 11;
	double d31 = 5.1, d32 = 5.8, d33 = 5.41;
	std::cout << maximum(n31, n32, n33) << std::endl;
	std::cout << maximum(s31, s32, s33) << std::endl;
	std::cout << maximum(d31, d32, d33) << std::endl;

	//Задание 4
	std::cout << "Задание 4: Шаблонная функция\n";
	const int length = 6;
	int arr[length]{ 5, 7, 4, 8, 2, 3 };
	print_arr(arr, length);
	std::cout << prime_arr(arr, length) << std::endl;

	return 0;
}//НЕ ЗАБЫТЬ УБРАТЬ КОММЕНТАРИИ!!!