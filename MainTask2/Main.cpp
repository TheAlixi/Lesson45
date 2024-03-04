#include <iostream>
#include <vector>
using namespace std;

void findLocalExtrema(const vector<int>& vec);

int main() {
	vector<int> values = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5 };

	findLocalExtrema(values);

	return 0;
}