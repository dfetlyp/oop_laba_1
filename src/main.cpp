#include <iostream>

int slogenie(int a, int b);
int vichitanie(int a, int b);
int umnogenie(int a, int b);
int delenie(int a, int b);

int main() {
	int a = 10, b = 5;
	int c = slogenie(a, b);
	int d = vichitanie(a, b);
	int e = umnogenie(a, b);
	int f = delenie(a, b);
	std::cout << c << std::endl << d << std::endl << e << std::endl << f;
}