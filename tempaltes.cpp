#include <iostream>
using namespace std;

template <typename T>
T Average() {
	const int size = 5;
	T array[size];

	cout << "Input array elements: " << endl;
	for (int i = 0; i < size; i++) {
		cin >> array[i];
	}

	T averageValue = 0;
	for (int i = 0; i < size; i++) {
		averageValue += array[i];
	}
	return averageValue / size;
}

template <typename T>
T amax() {
	const int size = 3;
	T array[size];

	cout << "Input array elements: " << endl;
	for (int i = 0; i < size; i++) {
		cin >> array[i];
	}

	T maxValue = array[0];
	for (int i = 1; i < size; i++) {
		if (array[i] > maxValue) {
			maxValue = array[i];
		}
	}

	return maxValue;
}


int main() {
	cout << "average value: " << Average<int>() << endl;
	cout << "average value: " << Average<double>() << endl;
	cout << "average value: " << Average<char>() << endl;
	cout << "average value: " << Average<long>() << endl;

	cout << "maximum value: " << amax<int>() << endl;
	cout << "maximum value: " << amax<double>() << endl;
	cout << "maximum value: " << amax<char>() << endl;
	cout << "maximum value: " << amax<long>() << endl;

	return 0;
}