#include "Array.h"
#include "Vector.h"
#include <iostream>
#include <time.h>
using namespace std;

void main() {
	srand(time(0));
	Array<int>arr1(rand() % 4 + 3);
	arr1.SetRand(-99, 99);
	cout << "Arr1<int> = " << arr1 << endl;
	Array<double>arr2(rand() % 4 + 3);
	arr2.SetRandDouble(-10, 9);
	cout << "Arr2<double> = " << arr2 << endl;
	Array<Vector>arr3(rand() % 4 + 3);
	cout << "Arr3<Vector> = " << arr3 << endl;
	Array<Vector>arr4(rand() % 4 + 3);
	cout << "Arr4<Vector> = " << arr4 << endl;
	cout << "(Arr3 <= Arr4) = " << (arr3 <= arr4) << endl;
	cout << "((int)Arr3 < (int)Arr4) = " << ((int)arr3 < (int)arr4) << endl;
	cout << "(Arr3[0] < Arr4[0]) = " << (arr3[0] < arr4[0]) << endl;
	Array<Vector>arr5 = arr4;
	cout << "Arr5<Vector> = Arr4 = " << arr4 << endl;
	cout << "(Arr5 == Arr4) = " << (arr5 == arr4) << endl;
}