/* Practice Problem #10
 * Date: 4/7/26
 * Description: Find the intersection of two arrays; in other words, find
 * the set of elements that are present in both arrays. Print the set. 
 *
 * Test Cases
 * Case 1: Given two arrays: [1, 2, 3, 4, 5] and [3, 4, 5, 6, 7],
 * 3, 4, 5 will be printed.
 *
 * Completed: 4/7/26
 */

#include <iostream>
using namespace std;

void findIntersect(int nums1[], int size1, int nums2[], int size2,
		   int same[], int & sameSize);
void printIntersect(int nums[], int size);

int main() 
{
	int test1[] = {1, 2, 3, 4, 5};
	int test2[] = {3, 4, 5, 6, 7};
	int same[] = {};
	int sameSize = 0;

	findIntersect(test1, 5, test2, 5, same, sameSize);

	printIntersect(same, sameSize);

	return 0;
}


void findIntersect(int nums1[], int size1, int nums2[], int size2,
		   int same[], int & sameSize) 
{
	for (int i = 0; i < size1; i++) 
	{
		for (int j = 0; j < size2; j++) 
		{
			if (nums1[i] == nums2[j]) 
			{
				same[sameSize] = nums1[i];
				++sameSize;
			}
		}
	}
}


void printIntersect(int nums[], int size) 
{
	for (int i = 0; i < size; i++) 
	{
		cout << nums[i];
		if (i < size - 1) 
		{
			cout << ", ";
		}
	}
	cout << endl;	
}
