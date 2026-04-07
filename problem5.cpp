/* Practice Problem #5
 * Date: 4/3/26
 * Description: Given an int array length 2, return true if it does not
 * contain a 2 or 3. 
 *
 * Test Cases
 * Case 1: no23([4, 5]) -> true
 * Case 2: no23([4, 2]) -> false
 * Case 3: no23([3, 5]) -> false
 *
 * Completed: 4/3/26
 */

#include <iostream>
#include <cstring>
using namespace std;

const int MAX = 100;

bool no23(int nums[]);
void boolConverter(bool convert, char cstring[]);
void printBoolString(char string[]);

int main() {
	int test1[] = {4, 5};
	int test2[] = {4, 2};
	int test3[] = {3, 5};
        
	bool test1_result = false;
	bool test2_result = false;
	bool test3_result = false;

	char test1_string[MAX]; 
	char test2_string[MAX]; 
	char test3_string[MAX];

	test1_result = no23(test1);
	test2_result = no23(test2);
	test3_result = no23(test3);

	boolConverter(test1_result, test1_string); 
	boolConverter(test2_result, test2_string);
	boolConverter(test3_result, test3_string);

	printBoolString(test1_string);
	printBoolString(test2_string);
	printBoolString(test3_string);

	return 0;
}


bool no23(int nums[]) {
	bool no23 = true;

	for (int i = 0; i < 2; i++) {
		if (nums[i] == 2 || nums[i] == 3) {
			no23 = false;
			i = 2;
		}
	}

	return no23;
}


void boolConverter(bool convert, char cstring[]) {
	
	if (convert == true) {
		strcpy(cstring, "True");
	}
	else {
		strcpy(cstring, "False");
	}
}


void printBoolString(char string[]) {
	
	for (int i = 0; i < 5; i++) {
		cout << string[i];
	}
	cout << endl;
}
