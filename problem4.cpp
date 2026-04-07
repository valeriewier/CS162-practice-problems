/* Practice Problem #4
 * Date: 4/3/26
 * Description: Start with 2 int arrays, a and b, of any length. Return how
 * many of the arrays have 1 as their first element. 
 *
 * Test Cases
 * Case 1: start1([1, 2, 3], [1, 2]) -> 2
 * Case 2: start1([7, 2, 3], [1]) -> 1
 * Case 3: start1([1, 2], []) -> 1
 *
 * Completed: 4/3/26
 */

#include <iostream>
using namespace std;

int start1(int nums1[], int nums2[]);

int main() {
	int test1_1[] = {1, 2, 3}; int test1_2[] = {1, 3};
	int test2_1[] = {7, 2, 3}; int test2_2[] = {1};
	int test3_1[] = {1, 2}; int test3_2[] = {};

	cout << "1 Count of Test 1: " << start1(test1_1, test1_2) << endl;
	cout << "1 Count of Test 2: " << start1(test2_1, test2_2) << endl;
	cout << "1 Count of Test 3: " << start1(test3_1, test3_2) << endl;

	return 0;
}


int start1(int nums1[], int nums2[]) {
	int start1Count = 0;

	if (nums1[0] == 1) {
		start1Count++;	
	}
	if (nums2[0] == 1) {
		start1Count++;
	}

	return start1Count;
}
