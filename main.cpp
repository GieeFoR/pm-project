#include <iostream>
#include "ArrayBitmap.h"
#include "Inversion.h"

int main() {
	ArrayBitmap bitmap{4, 4};
	bitmap(0, 0) = bitmap(1, 1) = bitmap(2, 2) = bitmap(3, 3) = true;

	std::cout << "Before:\n";
	std::cout << bitmap << "\n";

	Inversion inversion;
	inversion.transform(bitmap);

	std::cout << "After:\n";
	std::cout << bitmap << "\n";

	getchar();
	return 0;
}
