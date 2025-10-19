#include <iostream>
#define SIZE 2
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
	T array[SIZE];
public:
	/*Myclass();*/
	//Myclass(int size);
	/*void setSize(int size);
	int getSize();*/
	void inputArray(/*, int size*/);
	void print() const;
	void averageValue();
	void maximumValue();
	~Myclass();
};

//template <typename T>
//Myclass<T>::Myclass() {}

//template <typename T>
//Myclass<T>::Myclass(int size) {
//	cout << "Input array size: ";
//	cin >> size;
//	/*this->size = size;*/
//}

template <typename T>
void Myclass<T>::inputArray(/*, int size*/) {
	cout << "Input " << SIZE << " array elements: " << endl;
	for (int i = 0; i < SIZE; i++) {
		cin >> array[i];
	}
}

template <typename T>
void Myclass<T>::print() const{
	cout << "Array: ";
	for (int i = 0; i < SIZE; i++) {
		cout << "->" << array[i];
	}
	cout << endl;
}

template <typename T>
void Myclass<T>::averageValue() {
	T averageValue = 0;
	for (int i = 0; i < SIZE; i++) {
		averageValue += array[i];
	}
	averageValue /= SIZE;
	cout << "Average value: " << averageValue << endl;
}

template <typename T>
void Myclass<T>::maximumValue() {
	T maxValue = array[0];
	for (int i = 1; i < SIZE; i++) {
		if (array[i] > maxValue) {
			maxValue = array[i];
		}
	}
	cout << "Maximum value: " << maxValue << endl;
}

//template <typename T>
////void Myclass<T>::setSize(int size) {
////	this->size = size;
////}

//template <typename T>
//int Myclass<T>::getSize() {
//	return this->size;
//}

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

	/*Myclass<int>* ptr;
	ptr = (Myclass<int>*)new int [sizeof(Myclass<int>) + 3*sizeof(int)];*/
	/*Myclass<int>setSize(3);*/
	Myclass<int>object2;
	object2.inputArray();
	object2.print();
	object2.maximumValue();
	object2.averageValue();

	/*Myclass<double>object3;
	object3.inputArray();
	object3.print();
	object3.maximumValue();
	object3.averageValue();

	Myclass<char>object4;
	object4.inputArray();
	object4.print();
	object4.maximumValue();
	object4.averageValue();

	Myclass<long>object5;
	object5.inputArray();
	object5.print();
	object5.maximumValue();
	object5.averageValue();*/

	return 0;
}
