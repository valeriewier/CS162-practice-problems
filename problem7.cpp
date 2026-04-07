/* Practice Problem #7
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

void reverseArray(int array[], int reversedArray[], int size);
void printArray(int array[], int size);

int main() {
	int test1[5] = {1, 2, 3, 4, 5};
	int reverseTest1[5] = {0, 0, 0, 0, 0};

	reverseArray(test1, reverseTest1, 5);
	printArray(reverseTest1, 5);

	return 0;
}


void reverseArray(int array[], int reversedArray[], int size) {

	for (int i = 0; i < size; i++) {
		reversedArray[i] = array[(size - 1) - i];
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
