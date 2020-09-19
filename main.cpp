#include <iostream>
#include <cctype>

int main() {
	std::cout << "Hello, World!" << std::endl;

	char s = '4';
	bool f = isalnum(s);
	bool f1 = isdigit('0');

	return 0;
}