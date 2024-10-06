#include <iostream>
#include <string>
int main() {
	setlocale(LC_ALL, "Russian");
	int Num;
	std::cout << "Введите число на примере которого вы хотите убедиться в гипотезе Сиракуз, число должно быть натуральным и больше единицы!";
	std::cout << "Ввод:";
	std::cin >> Num;
	while (Num != 1) {
		if (Num % 2 == 0) {
			std::cout << "Число четно, делим пополам:";
			Num /= 2;
			std::cout << Num;
		}
		else {
			std::cout << "Число нечетно,умножим на три, прибавим один и разделим пополам:";
			Num = (Num * 3 + 1) / 2;
			std::cout << Num;
		}
	}
		
	
	if (Num == 1) {
		std::cout << "Теория верна!";
	}
	return 0;
	}
