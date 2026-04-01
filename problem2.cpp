/* Practice Problem #2
 * Date: 4/1/26
 * Description: Given an array of ints, swap the first and last elements in
 * the array. The array length will be at least 1.
 * 
 * Test Cases
 * Case 1: swapEnds([1, 2, 3, 4]) -> [4, 2, 3, 1]
 * Case 2: swapEnds([1, 2, 3]) -> [3, 2, 1]
 * Case 3: swapEnds([8, 6, 7, 9, 5]) -> [5, 6, 7, 9, 8]
 *
 * Completed: 4/1/26
 */

#include <iostream>
using namespace std;

void swapEnds(int nums[], int size);
void printArray(int nums[], int size);

int main() {
	int test1[4] = {1, 2, 3, 4};
	int test2[3] = {1, 2, 3};
	int test3[5] = {8, 6, 7, 9, 5};

	swapEnds(test1, 4);
	swapEnds(test2, 3);
	swapEnds(test3, 5);

	printArray(test1, 4);
	printArray(test2, 3);
	printArray(test3, 5);

}

void swapEnds(int nums[], int size) {
	int swap = 0;

	swap = nums[size - 1];
	nums[size - 1] = nums[0];
	nums[0] = swap;

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
