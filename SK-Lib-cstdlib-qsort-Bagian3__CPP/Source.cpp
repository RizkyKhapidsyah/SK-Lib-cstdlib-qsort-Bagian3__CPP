#include <iostream>
#include <cstdlib>
#include <conio.h>

/*
	Source by Programiz (https://www.programiz.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

using namespace std;

int bandingkan(const void* a, const void* b) {
	const int* x = (int*)a;
	const int* y = (int*)b;

	if (*x > *y) {
		return 1;
	} else if (*x < *y) {
		return -1;
	}
		
	return 0;
}

int main() {
	const int num = 10;
	int arr[num] = { 9,4,19,2,7,9,5,15,23,3 };

	cout << "Sebelum sorting" << endl;
	
	for (int i = 0; i < num; i++) {
		cout << arr[i] << " ";
	}
		

	qsort(arr, num, sizeof(int), bandingkan);
	cout << endl << endl;
	cout << "Setelah sorting" << endl;

	for (int i = 0; i < num; i++) {
		cout << arr[i] << " ";
	}
	
	_getch();
	return 0;
}