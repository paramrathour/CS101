#include <iostream>

unsigned int collatz(int n);

int main() {
	int n;
	std::cin >> n;
	
	while (n != -1) {
		std::cout << collatz(n) << std::endl;
		std::cin >> n;
	}
	return 0;	
}

unsigned int collatz(int n) {
	unsigned int counter = 0;
	while (n != 1) {
		counter++;
		if (n % 2 == 0) {
			n /= 2;
		} else {
			n = 3 * n + 1;
		}
	}
	return counter;
}
