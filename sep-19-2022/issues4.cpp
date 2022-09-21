#include <iostream>
int sum (int arr[] , int size)
{
	int sum = 0;
	for (int i = 0 ; i < size ; ++i)
	{
		sum += arr[i];
	}
	return sum;
}

int main()
{
	const int size = 5;
	int arr[size];
	for (int i = 0 ; i < size ; ++i)
	{
		std::cin >> arr[i];
	}
	std::cout << "The sum of given array is" << " " << sum (arr,size);
}
