#include <iostream>

double add(double a, double b) {
	return (a + b);
}

int main() {
	std::cout << "Enter a number: ";
	double a;
	std::cin >> a;
	std::cout << "Enter second number: ";
	double b;
	std::cin >> b;

	double result = add(a, b);
	std::cout << "Sum is " << result << std::endl;

	return 0;
}
