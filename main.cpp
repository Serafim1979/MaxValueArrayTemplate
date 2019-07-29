#include<iostream>
///////////////////////////////////////////////
using std::cout;
using std::cin;
using std::endl;
///////////////////////////////////////////////
const int ARR_SIZE = 5;
///////////////////////////////////////////////
template <typename T>
T max(T * arr)
{
	T maxValue = arr[0];
	for (int i = 1; i < ARR_SIZE; ++i)
		if (arr[i] > maxValue)
			maxValue = arr[i];
	return maxValue;
}
///////////////////////////////////////////////
int main()
{
	int arrOne[ARR_SIZE] = { 5, 3, 1, 7, 2 };
	cout << "The maximum value of the array is: " << max(arrOne) << endl;

	double arrTwo[ARR_SIZE] = { 2.4, 4.6, 0.15, 0.7, 8.9 };
	cout << "The maximum value of the array is: " << max(arrTwo) << endl;

	system("pause");
	return 0;
}