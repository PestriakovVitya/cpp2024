#include <iostream>
#include <string>
int main() {
	setlocale(LC_ALL, "Russian");
	int Num;
	std::cout << "������� ����� �� ������� �������� �� ������ ��������� � �������� �������, ����� ������ ���� ����������� � ������ �������!";
	std::cout << "����:";
	std::cin >> Num;
	while (Num != 1) {
		if (Num % 2 == 0) {
			std::cout << "����� �����, ����� �������:";
			Num /= 2;
			std::cout << Num;
		}
		else {
			std::cout << "����� �������,������� �� ���, �������� ���� � �������� �������:";
			Num = (Num * 3 + 1) / 2;
			std::cout << Num;
		}
	}
		
	
	if (Num == 1) {
		std::cout << "������ �����!";
	}
	return 0;
	}
