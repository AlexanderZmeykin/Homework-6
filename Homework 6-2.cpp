#include <iostream>
#include <Windows.h>



int exponentiation(int value, int power)
{
	int result = 1;
	for (int i = 0; i < power; i++)
	{
		result *= value;
	}
	std::cout << value << " в степени " << power << " = " << result << std::endl;
	return 0;
}

int main(int argc, char** argv)
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	exponentiation(5, 2);
	exponentiation(3, 3);
	exponentiation(4, 4);
	return 0;
}