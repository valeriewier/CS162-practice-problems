/* Practice Problem #1
 * Date: 3/31/26
 * Description: Given an int array, return true if the array contains 2 twice,
 * or 3 twice. The array will be length 0, 1, or 2.
 *
 * Test Cases
 * Case 1: double23([2, 2]) -> true
 * Case 2: double23([3, 3]) -> true
 * Case 3: double23([2, 3]) -> false
 *
 * Completed: 3/31/26
 */

#include <iostream>
using namespace std;

bool double23(int nums[], int size);

int main() {
	
	int test1[2] = {2, 2};
	int test2[2] = {3, 3};
	int test3[2] = {2, 3};

	cout << double23(test1, 2) << endl;
	cout << double23(test2, 2) << endl;
	cout << double23(test3, 2) << endl;

}

bool double23(int nums[], int size) {
	bool isTwice = false;
	int twoCount = 0;
	int threeCount = 0;
	
	for (int i = 0; i < size; i++) {
		if (nums[i] == 2) {
			twoCount++;
		}
		else if (nums[i] == 3) {
			threeCount++;
		}
	}

	if (twoCount == 2 || threeCount == 2) {
		isTwice = true;
	}

	return isTwice; 
}

