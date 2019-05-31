#include <iostream>
#include "ArrayBitmap.h"

int main() {
	ArrayBitmap bitmap{7, 7};
	bitmap(1, 1) = bitmap(2, 1) = bitmap(1, 2) = bitmap(2, 2) = true;
	std::cout << bitmap << "\n";

	std::cout << "Test:\n";
	std::cout << bitmap(1, 1) << "\n";
	std::cout << bitmap(2, 1) << "\n";
	std::cout << bitmap(1, 2) << "\n";
	std::cout << bitmap(2, 2) << "\n";
	std::cout << bitmap(3, 3) << "\n";

	getchar();
	return 0;
}