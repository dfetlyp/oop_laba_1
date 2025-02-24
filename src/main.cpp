#include <iostream>

int slogenie(int a, int b);
int vichitanie(int a, int b);

int main() {
	int a = 10, b = 5;
	int c = slogenie(a, b);
	int d = vichitanie(a, b);
	std::cout << c << std::endl << d << std::endl;
}