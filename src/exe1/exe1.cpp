#include <iostream>

#include "lib1.h"

int main() {
	std::cout << "Hi from exe1\n";
	int i = 2;
	std::cout << i << " doubled is " << lib1::double_it(i) << std::endl;
}
