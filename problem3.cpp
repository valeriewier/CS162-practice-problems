/* Practice Problem #3
 * Date: 4/2/26
 * Description: Given an int array length 3, if there is a 2 in the array
 * immediately followed by a 3, set the 3 element to 0. 
 *
 * Test Cases
 * Case 1: fix23([1, 2, 3]) -> [1, 2, 0]
 * Case 2: fix23([2, 3, 5]) -> [2, 0, 5]
 * Case 3: fix23([1, 2, 1]) -> [1, 2, 1] 
 *
 * Completed: 4/2/26
 */

#include <iostream>
using namespace std;

void fix23(int nums[], int size);
void printArray(int nums[], int size);

int main() {

	int test1[] = {1, 2, 3};
	int test2[] = {2, 3, 5};
	int test3[] = {1, 2, 1};

	fix23(test1, 3);
	fix23(test2, 3);
	fix23(test3, 3);

	printArray(test1, 3);
	printArray(test2, 3);
	printArray(test3, 3);

	return 0;
}


void fix23(int nums[], int size) {

	for (int i = 0; i < size - 1; i++) {
		if (nums[i] == 2 && nums[i + 1] == 3) {
			nums[i + 1] = 0;
			i++;
		}
	}
}

void printArray(int nums[], int size) {

	cout << '[';
	for (int i = 0; i < size; i++) {
		cout << nums[i];
		if (i < size - 1) {
			cout << ", ";
		}
	}
	cout << ']' << endl;
}
