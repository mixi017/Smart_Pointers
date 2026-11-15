#include <iostream>
#include <memory>

int main()
{
	std::shared_ptr<int> ptr1 = std::make_shared<int>(42);

	std::shared_ptr<int> ptr2( ptr1.get());

	std::cout << *ptr1 << std::endl;
	std::cout << *ptr2 << std::endl;

	return 0;
}