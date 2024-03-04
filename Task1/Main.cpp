#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<double> vec = { 3.5, -2.0, 1.0, -4.5, 2.7, 0.8, -1.2 };

	double sumNegatives = 0.0;
	double productBetweenMinMax = 1.0;

	double minElement = *min_element(vec.begin(), vec.end());
	double maxElement = *max_element(vec.begin(), vec.end());

	for (double elem : vec) {
		if (elem < 0) {
			sumNegatives += elem;
		}
		if (elem > minElement && elem < maxElement) {
			productBetweenMinMax *= elem;
		}
	}

	cout << "Sum of negative elements: " << sumNegatives << endl;
	cout << "Product of elements between min and max: " << productBetweenMinMax << endl;

	return 0;
}
