/* Practice Problem #11
 * Date: 4/7/26
 * Description: Given an array of ints, return true if the array contains
 * two 7's next to each other, or there are two 7's separated by one element,
 * such as with {7, 1, 7}. 
 *
 * Test Cases
 * Case 1: has77([1, 7, 7]) -> true
 * Case 2: has77([1, 7, 1, 7]) -> true
 * Case 3: has77([1, 7, 1, 1, 7]) -> false
 *
 * Completed: 4/7/26 
 */

#include <iostream>
#include <cstring>
using namespace std;

const int MAX {100};

bool has77(int nums[], int size);
void boolConverter(bool convert, char converted[]);

int main() 
{
	bool answer {false};
	char convertedAnswer[MAX] = {};
	int test1[] = {1, 7, 7};
	int test2[] = {1, 7, 1, 7};
	int test3[] = {1, 7, 1, 1, 7};

	answer = has77(test1, 3);
	boolConverter(answer, convertedAnswer);
	cout << convertedAnswer << endl;

	answer = has77(test2, 4);
	boolConverter(answer, convertedAnswer);
	cout << convertedAnswer << endl;

	answer = has77(test3, 5);
	boolConverter(answer, convertedAnswer);
	cout << convertedAnswer << endl;

	return 0;
}


bool has77(int nums[], int size) 
{
	bool is77 {false};

	for (int i = 0; i < size - 1; i++) 
	{
		if (nums[i] == 7 && nums[i + 1] == 7) 
		{
			is77 = true;
			i = size;
		}
		else if (i < size - 2) 
		{
			if (nums[i] == 7 && nums[i + 2] == 7)
			{
				is77 = true;
				i = size;
			}
		}
	}
	
	return is77;
}


void boolConverter(bool convert, char converted[])
{
	if (convert == true) 
	{
		strcpy(converted, "True");
	}
	else 
	{
		strcpy(converted, "False");
	}
}

