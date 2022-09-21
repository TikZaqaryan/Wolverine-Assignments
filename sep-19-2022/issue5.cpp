#include <iostream>
int main()
{
	int num1;
	int num2;
	int num3;
	int size = 3;
	int mod = 0;
	std::cin >> num1 >> num2 >> num3;
	mod = (num1 + num2 + num3)/size;
	std::cout << mod;
}

