#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> vec = { 1, 2, 0, 4, 5, 6, 0, 8, 9 };

	int product = 1;
	int sum = 0;

	bool foundFirstZero = false;
	size_t firstZeroIndex = 0;

	for (size_t i = 0; i < vec.size(); ++i) {
		if (vec[i] == 0) {
			if (!foundFirstZero) {
				foundFirstZero = true;
				firstZeroIndex = i;
			}
			else {
				for (size_t j = firstZeroIndex + 1; j < i; ++j) {
					sum += vec[j];
				}
			}
		}
		else {
			if (i % 2 == 0) {
				product *= vec[i];
			}
		}
	}

	cout << "Product of elements with even indices: " << product << endl;
	cout << "Sum of elements between first and last zeros: " << sum << endl;

	return 0;
}