#include <iostream>

void do_print() {
	std::cout << "Printing!" << std::endl;
}

int main() {
	std::cout << "Starting main()" << std::endl;
	do_print();
	std::cout << "Ending main()" << std::endl;
	
	return 0;
}
