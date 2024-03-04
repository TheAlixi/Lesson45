#include <iostream>
#include <vector>
using namespace std;

void findLocalExtrema(const vector<int>& vec) {
	int n = vec.size();
	if (n < 3) {
		cout << "Cannot find local extrema. The vector size should be at least 3." << endl;
		return;
	}

	for (int i = 1; i < n - 1; ++i) {
		if (vec[i] < vec[i - 1] && vec[i] < vec[i + 1]) {
			cout << "Local minimum at index " << i << ": " << vec[i] << endl;
		}
		else if (vec[i] > vec[i - 1] && vec[i] > vec[i + 1]) {
			cout << "Local maximum at index " << i << ": " << vec[i] << endl;
		}
	}
}