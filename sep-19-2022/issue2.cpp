#include <iostream>

void cycle (int,int);

int main()
{
	int k;
	std::cin >> k;
	int res = 0;
	cycle(k,res);
}

void cycle (int k, int res)
{
	if (res == k)
	{
		return;
	}
	std::cout << res << " ";
	cycle(k , res + 1);
}
