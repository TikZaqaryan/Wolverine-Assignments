#include <iostream>
int main()
{
	int num1;
	int num2;
	std::cin >> num1 >> num2;
	if(num1 > num2)
	{
		std::cout << "The maximum is" << " " <<num1;
	}
	else
	{
		std::cout << "The maximum is" << " " << num2;
	}
return 0;
}
