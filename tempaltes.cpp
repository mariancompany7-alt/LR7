#include <iostream>
using namespace std;

/*template <typename T>
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
*/

template <typename T>
class Myclass {
	T array[];
	int size;
public:
	Myclass();
	Myclass(int size);
	~Myclass();
	void print(int size);
	void setSize(int size);
	int getSize();
};

template <typename T>
Myclass<T>::Myclass() { this->size = 0; }

template <typename T>
Myclass<T>::Myclass(int size) { 
	this->size = size; 
	cout << "Input size of array: ";
	for (int i = 0; i < size; i++) {
		cin >> array[i];
	}
}

template <typename T>
void Myclass<T>::print(int size) {
	cout << "Array:" << endl;
	for (int i = 0; i < size; i++) {
		cout << "" << array[i];
	}
}

template <typename T>
void Myclass<T>::setSize(int size) {
	this->size = size;
}

template <typename T>
int Myclass<T>::getSize() {
	cout << "";
}

template <typename T>
Myclass<T>::~Myclass() {}

int main() {
	/*cout << "average value: " << Average<int>() << endl;
	cout << "average value: " << Average<double>() << endl;
	cout << "average value: " << Average<char>() << endl;
	cout << "average value: " << Average<long>() << endl;

	cout << "maximum value: " << amax<int>() << endl;
	cout << "maximum value: " << amax<double>() << endl;
	cout << "maximum value: " << amax<char>() << endl;
	cout << "maximum value: " << amax<long>() << endl;*/

	Myclass<int> object;
	Myclass<int>object2(3);
	object.print(3);

	return 0;
}
