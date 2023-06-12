#include <iostream>
#include <tuple>
#include <vector>

std::tuple<int, int> min_y_max(std::vector<int> A, int i, int d) {
	if (i == d) return std::make_tuple(A[i], A[i]);
	int m = (i + d) / 2;
	std::tuple<int, int> min1_max1 = min_y_max(A, i, m);
	std::tuple<int, int> min2_max2 = min_y_max(A, m + 1, d);
	if (std::get<0>(min1_max1) > std::get<0>(min2_max2)) std::get<0>(min1_max1) = std::get<0>(min2_max2); 
	if (std::get<1>(min1_max1) < std::get<1>(min2_max2)) std::get<1>(min1_max1) = std::get<1>(min2_max2); 
	return min1_max1;
}
int main() {
	std::vector<int> A = {494, 626, 270, 4, 465, 618, 884, 796, 881, 718};
	std::tuple<int, int> min_max = min_y_max(A, 0, A.size() - 1);
  std::cout << "Min: " << std::get<0>(min_max) << " Max: " << std::get<1>(min_max) << std::endl;
	return 0;
}