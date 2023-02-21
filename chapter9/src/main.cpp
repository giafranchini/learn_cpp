#include <iostream>

void print(int* ptr)
{
	std::cout << *ptr;
}

int main()
{
	int x{ 5 };
	print(&x);

	int* myptr {};
	print(myptr);

	return 0;
}