#include <iostream>

long campesino(int x, int y) {
	if (x == 0) return 0;
	long result1 = campesino(x / 2, y + y);
	if (x % 2 == 1) result1 += y;
	return result1;
}
int main() {
	int x = 56;
	int y = 77;
	std::cout << campesino(x, y) << std::endl;
  return 0;
}