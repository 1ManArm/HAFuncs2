#include <iostream>

//����� ���� �����
int sum_of_five(int num1, int num2, int num3, int num4, int num5) {
	int sum = num1 + num2 + num3 + num4 + num5;
	return sum;
}

//������� �������������� - ������������ �������
inline int arithm(int num1, int num2, int num3) {
	int sum = num1 + num2 + num3;
	int abs = sum / 3;
	return abs;
}

//������������ �� ���� �������� - ������������� �������
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
	std::cout << "��� �������� - INT\n";
	return maximum(num1, maximum(num2, num3));
}
short maximum(short num1, short num2, short num3) {
	std::cout << "��� �������� - SHORT\n";
	return maximum(num1, maximum(num2, num3));
}
double maximum(double num1, double num2, double num3) {
	std::cout << "��� �������� - DBL\n";
	return maximum(num1, maximum(num2, num3));
}

//������ - ����� �������
template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << "[";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}

//������ - ������� �����
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
				return 1; //������� �� ����, ��� �� ���������� ����� ������ 6, � ������� ���, ����� ���������� ������ ���� ������ �����, � �� ��� (� � ������� �� 4). �����, ������� �� ��?
			}
		}
}


int main() {
	setlocale(LC_ALL, "Russian");
	
	//������� 1
	std::cout << "������� 1: ������� �����\n";
	int n11, n12, n13, n14, n15; //����� �� ����������, � ���������� ����� ����� ��� - ����� �������, ������ ����� - ����� ����������
	std::cout << "������ �����: ";
	std::cin >> n11;
	std::cout << "������ �����: ";
	std::cin >> n12;
	std::cout << "������ �����: ";
	std::cin >> n13;
	std::cout << "��������� �����: ";
	std::cin >> n14;
	std::cout << "����� �����: ";
	std::cin >> n15;
	std::cout << "����� ���� �����:\n" << sum_of_five(n11, n12, n13, n14, n15) << std::endl;

	//������� 2
	std::cout << "������� 2: ������������ �������\n";
	int n21, n22, n23;
	std::cout << "������ �����: ";
	std::cin >> n21;
	std::cout << "������ �����: ";
	std::cin >> n22;
	std::cout << "������ �����: ";
	std::cin >> n23;
	std::cout << "������� �������������� ���� �����: " << arithm(n21, n22, n23) << std::endl;

	//������� 3
	std::cout << "������� 3: ������������� �������\n";
	int n31 = 5, n32 = 8, n33 = 3;
	short s31 = 6, s32 = 3, s33 = 11;
	double d31 = 5.1, d32 = 5.8, d33 = 5.41;
	std::cout << maximum(n31, n32, n33) << std::endl;
	std::cout << maximum(s31, s32, s33) << std::endl;
	std::cout << maximum(d31, d32, d33) << std::endl;

	//������� 4
	std::cout << "������� 4: ��������� �������\n";
	const int length = 6;
	int arr[length]{ 5, 7, 4, 8, 2, 3 };
	print_arr(arr, length);
	std::cout << prime_arr(arr, length) << std::endl;

	return 0;
}//�� ������ ������ �����������!!!