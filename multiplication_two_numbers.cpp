#include <iostream>
#include <cmath>

long multiplicar(int x, int y, short n) {
	if (n == 1) return x * y;
	// Descompongo el problema en subproblemas
	int m = n / 2;
	long ten_m = std::pow(10, m);
	long ten_2m = std::pow(10, 2*m);

	long a = x / ten_m;
	long b = x % ten_m;
	long c = y / ten_m;
	long d = y % ten_m;

	long ac = multiplicar(a,c,m);
	long bc = multiplicar(b,c,m);
	long ad = multiplicar(a,d,m);
	long bd = multiplicar(b,d,m);

	// Recombino las soluciones de los subproblemas para obtener la multiplicacion
	return ten_2m * ac + ten_m * (bc + ad) + bd;
}

int main() {
	std::cout << multiplicar(1234, 5674, 4) << std::endl;
}