#include <iostream>

void TowerOfHanoi(int n, int i, int k)
{
	if (n == 1)
	{
		std::cout << "Переложить диск 1 cо стержня " << i << " на стержень " << k << std::endl;
	}
	else
	{

		int j = 6 - i - k; // Номер побочного столбика
		TowerOfHanoi(n - 1, i, j);
		std::cout << "Переложить диск " << n << " со стержня " << i << " на стержень " << k << std::endl;
		TowerOfHanoi(n - 1, j, k);
	}
}

int main()
{
	std::cout << "Ввудите количество дисков: ";
	int n;
	std::cin >> n;
	std::cout << "Введите номер, на котором находятся диски: ";
	int i;
	std::cin >> i;
	std::cout << "Введите номер стержня, на который нужно переложить диски: ";
	int k;
	std::cin >> k;

	TowerOfHanoi(n, i, k);

	return 0;
}
