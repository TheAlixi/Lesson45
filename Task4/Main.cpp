#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> vec = { 3, 7, 0, 2, 8, 0, 5, 4 };

	int maxIndex = 0;
	int product = 1;
	bool foundFirstZero = false;
	int firstZeroIndex = -1;

	for (size_t i = 0; i < vec.size(); ++i) {
		if (vec[i] > vec[maxIndex]) {
			maxIndex = i;
		}

		if (vec[i] == 0) {
			if (!foundFirstZero) {
				foundFirstZero = true;
				firstZeroIndex = i;
			}
			else {
				for (size_t j = firstZeroIndex + 1; j < i; ++j) {
					product *= vec[j];
				}
				break;
			}
		}
	}

	cout << "Index of the maximum element: " << maxIndex << endl;
	cout << "Product of elements between first and second zeros: " << product << endl;

	return 0;
}