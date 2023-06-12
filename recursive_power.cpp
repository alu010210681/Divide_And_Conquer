#include <iostream>

long power_r(long a, int n) {
	// Caso base
  if (n == 1) return a;
	// Descompongo el problema en subproblemas
	int m = n / 2;
	long tmp = power_r(a, m);
	// Recombino las soluciones de los subproblemas
	if (n % 2 == 0) return tmp * tmp;
	else return tmp * tmp * a;
}

int main() {
	std::cout << power_r(2,5) << std::endl;
}