#include <iostream>

int main() {
	int arr[100];

	for (int i = 0; i < 100; i++) {
		arr[i] = i + 1;
	}
	std::cout << arr << std::endl;
	return -1;
}