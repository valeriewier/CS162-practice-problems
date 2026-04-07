/* HARDER Practice Problem #7 - NO SEPARATE ARRAY
 * Date: 4/3/26
 * Description: Reverse the order of elements in an array. 
 *
 * Test Cases
 * Case 1: Array [1, 2, 3, 4, 5] reverses to [5, 4, 3, 2, 1]
 *
 * Completed: 4/3/26
 */

#include <iostream>
using namespace std;

void reverseArray(int array[], int size);
void printArray(int array[], int size);

int main() {
	int test1[5] = {1, 2, 3, 4, 5};

	reverseArray(test1, 5);
	printArray(test1, 5);

	return 0;
}


void reverseArray(int array[], int size) {
	int swap = 0;

	for (int i = 0; i < size / 2; i++) {
		swap = array[i];
		array[i] = array[(size - 1) - i];
		array[(size - 1) - i] = swap;
	}
}


void printArray(int array[], int size) {

	cout << '[';
	for (int i = 0; i < size; i++) {
		cout << array[i];
		if (i < size - 1) {
			cout << ", ";
		}
	}
	cout << ']' << endl;
}
