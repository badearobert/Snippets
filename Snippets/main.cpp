#include <iostream>
#include "is_one_of.h"

using namespace Snippets;

void TEST_is_one_of()
{
	if constexpr(v1::is_one_of<int, int, float>)
	{
		std::cout << "v1 is same \n";
	}
	if constexpr(v2::is_one_of<int>::check<int, float>())
	{
		std::cout << "v2 is same \n";
	}
	if constexpr(is_something<int>::value)
	{
		std::cout << "v3 is same \n";
	}

	if constexpr(is_something<int>::value)
	{
		std::cout << "int is in the list \n";
	}
	if constexpr(!is_something<short>::value)
	{
		std::cout << "short is not in the list \n";
	}
}
int main()
{
	TEST_is_one_of();

	std::cin.get();
	return 0;
}